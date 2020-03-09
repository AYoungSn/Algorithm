//
//  NandM(3)15651.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/09.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//
//중복 순열
#include <iostream>
using namespace std;
int N,M,list[7]={1,1,1,1,1,1,1};
void dfs(int cnt,int index){
    if(cnt==M){
        for(int i=0;i<M;i++)
            cout<<list[i]<<" ";
        cout<<"\n";
        return;
    }
    for(int i=1;i<=N;i++){
        list[index]=i;
        dfs(cnt+1,index+1);
    }
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    cin>> N>>M;
    dfs(0,0);
    return 0;
}
