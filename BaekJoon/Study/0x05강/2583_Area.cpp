//
//  2583_Area.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/08/29.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> arr;
int board[101][101]={0,};
bool visit[101][101]={false,};
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
queue<pair<int,int>> Q;

int cnt=0;
int M,N,K,x1,y1,x2,y2;

void DFS(){
    cnt=1;
    while(!Q.empty()){
        auto cur=Q.front();Q.pop();
        for(int k=0;k<4;k++){
            int nx=dx[k]+cur.first;
            int ny=dy[k]+cur.second;
            if(nx>=0&&ny>=0&&nx<N&&ny<M
               &&board[nx][ny]==0&&!visit[nx][ny]){
                visit[nx][ny]=true;
                Q.push({nx,ny});
                cnt++;
            }
        }
    }
    arr.push_back(cnt);
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    cin>>M>>N>>K;
    for(int k=0;k<K;k++){
        cin>>x1>>y1>>x2>>y2;
        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                board[i][j]=1;
                visit[i][j]=true;
            }
        }
    }
    int area=0;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(board[i][j]==0&&!visit[i][j]){
                area++;
                Q.push({i,j});
                visit[i][j]=true;
                DFS();
            }
        }
    }
    cout<<area<<"\n";
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    return 0;
}
