//
//  10026_CowArt.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/08/29.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <string>
#include <queue>
using namespace std;

string grid[102];
bool visit[102][102]={false,}, visit2[102][102]={false,};

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    int N;
    cin>>N;
    for(int n=0;n<N;n++)
        cin>>grid[n];
    
    int area[2]={0,0};
    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
    queue<pair<int,int>> Q;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            char ch=grid[i][j];
            if(!visit[i][j]){
                Q.push({i,j});
                visit[i][j]=true;
                area[0]++;
                while(!Q.empty()){
                    auto cur=Q.front();Q.pop();
                    for(int k=0;k<4;k++){
                        int nx=cur.first+dx[k];
                        int ny=cur.second+dy[k];
                        if(nx>=0&&ny>=0&&nx<N&&ny<N&&
                           ch==grid[nx][ny]&&!visit[nx][ny]){
                            visit[nx][ny]=true;
                            Q.push({nx,ny});
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            char ch=grid[i][j];
            if(!visit2[i][j]){
                Q.push({i,j});
                visit2[i][j]=true;
                area[1]++;
                while(!Q.empty()){
                    auto cur=Q.front();Q.pop();
                    for(int k=0;k<4;k++){
                        int nx=cur.first+dx[k];
                        int ny=cur.second+dy[k];
                        if(nx>=0&&ny>=0&&nx<N&&ny<N&&
                           !visit2[nx][ny]){
                            if(ch==grid[nx][ny]||(ch=='R'&&grid[nx][ny]=='G')||(ch=='G'&&grid[nx][ny]=='R')){
                                visit2[nx][ny]=true;
                                Q.push({nx,ny});
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<area[0]<<" "<<area[1];
    
    return 0;
}
