//
//  2667_danjiNum.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/08/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N,cnt=0;
string arr[25];
vector<int> danji;
bool visit[25][25]={false};

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void DFS(int i, int j){
    visit[i][j]=true;
    cnt++;
    for(int k=0;k<4;k++){
        int nx=dx[k]+i;
        int ny=dy[k]+j;
        if(nx>=0&&ny>=0&&nx<N&&ny<N&&
           !visit[nx][ny]&&arr[nx][ny]=='1'){
            DFS(nx,ny);
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);

    cin>>N;
    for(int i=0;i<N;i++)
        cin>>arr[i];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j]=='1'&&!visit[i][j]){
                cnt=0;
                DFS(i,j);
                danji.push_back(cnt);
            }
        }
    }
    sort(danji.begin(),danji.end());
    cout<<danji.size()<<"\n";
    for(int i=0;i<danji.size();i++)cout<<danji[i]<<"\n";
    
    return 0;
}
