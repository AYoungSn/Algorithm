//
//  2468_SafeArea.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/09/02.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int arr[101][101];
bool water[101][101];
bool visit[101][101];

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    int N, minH=100, maxH=0;
    cin>>N;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
            minH=(arr[i][j]<minH?arr[i][j]:minH);
            maxH=arr[i][j]>maxH?arr[i][j]:maxH;
        }
    
    int maxCnt=1, cnt=0;
    queue<pair<int,int>> Q;
    for(int i=minH;i<=maxH;i++){
        cnt=0;
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(arr[j][k]<=i){
                    water[j][k]=true;
                }
                visit[j][k]=false;
            }
        }
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(!water[j][k]&&!visit[j][k]){
                    Q.push({j,k});
                    visit[j][k]=true;
                    cnt++;
                    while(!Q.empty()){
                        auto cur=Q.front();Q.pop();
                        for(int a=0;a<4;a++){
                            int nx=dx[a]+cur.first;
                            int ny=dy[a]+cur.second;
                            if(nx>=0&&ny>=0&&nx<N&&ny<N
                               &&!water[nx][ny]&&!visit[nx][ny]){
                                visit[nx][ny]=true;
                                Q.push({nx,ny});
                            }
                        }
                    }
                }
            }
        }
        if(maxCnt<cnt)maxCnt=cnt;
    }
    cout<<maxCnt;
    return 0;
}
