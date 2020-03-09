//
//  NandM(2)15650.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/09.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int N,M;
vector<int> V;
void dfs(int num,int cnt){
    if(cnt==M){
        for(int i=0;i<M;i++)
            cout<<V[i]<<" ";
        cout<<"\n";
        V.pop_back();
        return;
    }
    else
        for(int i=num;i<N;i++){
            V.push_back(i+1);
            dfs(i+1,cnt+1);
        }
    V.pop_back();
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);

    cin>>N>>M;
    int i;
    if(M==N){
        for(i=1;i<=N;i++)
            cout<<i<<" ";
    }else{
        for(i=1;i<=N-M+1;i++){
            V.push_back(i);
            dfs(i,1);
            V.clear();
        }
    }
    return 0;
}
