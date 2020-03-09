//
//  NandM(1)15649.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/08.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int N,M,i,arr[8];
vector<int> V;
bool Select[8];
void print(){
    for(int i=0;i<V.size();i++)
        cout<<V[i]<<" ";
    cout<<"\n";
}
void dfs(int cnt){
    if(cnt==M)
        print();
    else
    for(int i=0;i<N;i++){
        if(Select[i]==true)continue;
        Select[i]=true;
        V.push_back(arr[i]);
        dfs(cnt+1);
        V.pop_back();
        Select[i]=false;
    }
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    cin>> N>>M;
    for(int i=0;i<N;i++){
        arr[i]=i+1;
    }
    dfs(0);
    
    return 0;
}
