//
//  2206_BreakWall.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/08/29.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

string map[1001];
int visit[1001][1001][2];
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};

int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);cout.tie(NULL);
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++)
        cin>>map[i];
    
    queue<pair<pair<int,int>, int>> Q;
    Q.push({{0,0},1});
    visit[0][0][1]=1;
    
    while(!Q.empty()){
        auto cur=Q.front();Q.pop();
        if(cur.first.first==N-1 && cur.first.second==M-1){
            cout<<visit[N-1][M-1][cur.second];
            return 0;
        }
        for(int i=0;i<4;i++){
            int nx=dx[i]+cur.first.first;
            int ny=dy[i]+cur.first.second;
            if(nx>=0 && ny>=0 && nx<N && ny<M && visit[nx][ny][cur.second]==0){
                if(map[nx][ny]=='0'){
                    visit[nx][ny][cur.second]=visit[cur.first.first][cur.first.second][cur.second]+1;
                    Q.push({{nx,ny},cur.second});
                    
                }else if(map[nx][ny]=='1'&&cur.second==1){
                    visit[nx][ny][0]=visit[cur.first.first][cur.first.second][1]+1;
                    Q.push({{nx,ny},0});
                }
            }
        }
    }
    cout<<"-1";
    return 0;
}
