//
//  7562_NightMove.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/08/29.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int board[301][301]={0,};
bool visit[301][301]={false,};
int dx[]={1,2,2,1,-1,-2,-2,-1};
int dy[]={2,1,-1,-2,-2,-1,1,2};
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    queue<pair<int, int>> Q;
    int L, x,y, x2, y2;
    for(int t=0;t<T;t++){
        cin>>L;
        cin>>x>>y>>x2>>y2;
        if(x==x2&&y==y2){
            cout<<"0\n";
            continue;
        }
        for(int i=0;i<L;i++)
            for(int j=0;j<L;j++){
                visit[i][j]=false;
                board[i][j]=0;
            }
        Q.push({x,y});
        while(!Q.empty()){
            auto cur=Q.front();Q.pop();
            for(int i=0;i<8;i++){
                int nx=cur.first+dx[i];
                int ny=cur.second+dy[i];
                if(nx>=0&&ny>=0&&nx<L&&ny<L&&
                   !visit[nx][ny]&&board[nx][ny]==0){
                    board[nx][ny]=board[cur.first][cur.second]+1;
                    visit[nx][ny]=true;
                    Q.push({nx,ny});
                }
                if(board[x2][y2]!=0){
                    cout<<board[x2][y2]<<"\n";
                    while(!Q.empty())Q.pop();
                    break;
                }
            }
        }
    }
    return 0;
}
