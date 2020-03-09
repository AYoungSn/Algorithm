//
//  NandM(4)15652.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/09.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
int N,M,list[8];

void dfs(int cnt, int num){
    if(cnt==M){
        for(int i=0;i<M;i++)
            cout<<list[i]<<" ";
        cout<<"\n";
        return;
    }
    for(int i=num;i<=N;i++){
        list[cnt]=i;
        dfs(cnt+1,i);
    }
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    cin>>N>>M;
    dfs(0,1);
    
    return 0;
}
