//
//  2573_North.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/09/02.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    int N,M,arr[301][301],visit[301][301];
    cin>>N>>M;
    bool ice[301][301];
    for(int n=0;n<N;n++){
        for(int m=0;m<M;m++){
            cin>>arr[n][m];
            if(arr[n][m]==0)
                ice[n][m]=false;
            else
                ice[n][m]=true;
        }
    }
    int year=0, cnt=1;
    queue<pair<int,int>> Q;

    while(cnt<2){
        for(int i=1;i<N-1;i++){
            for(int j=1;j<M-1;j++){
                visit[i][j]=false;
                if(arr[i][j]!=0){
                    for(int k=0;k<4;k++){
                        int nx = i+dx[k];
                        int ny = j+dy[k];
                        if(arr[nx][ny]==0&&arr[i][j]!=0&&!ice[nx][ny]){
                            arr[i][j]--;
                        }
                    }
                }
            }
        }
        year++;
        cnt=0;
        for(int i=1;i<N-1;i++){
            for(int j=1;j<M-1;j++){
                if(arr[i][j]>0&&!visit[i][j]){
                    Q.push({i,j});
                    visit[i][j]=true;
                    cnt++;
                    while(!Q.empty()){
                        auto cur=Q.front();Q.pop();
                        for(int k=0;k<4;k++){
                            int nx=cur.first+dx[k];
                            int ny=cur.second+dy[k];
                            if(!visit[nx][ny]&&arr[nx][ny]!=0){
                                visit[nx][ny]=true;
                                Q.push({nx,ny});
                            }
                        }
                    }
                }
                if(arr[i][j]==0)ice[i][j]=false;
            }
        }
        if(cnt==0){
            cout<<0;
            return 0;
        }
    }
    cout<<year;
    return 0;
}
