//
//  Start&Link14889.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/10.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int N,S[20][20],sumA,sumB,gapMin=2147483647;
vector<int> start, link;
void dfs(int num){
    if(num==N){
        if(start.size()==N/2&&link.size()==N/2){
            sumA=sumB=0;
            for(int i=0;i<start.size()-1;i++){
                for(int j=i+1;j<start.size();j++){
                    if(i==j)continue;
                    sumA+=S[start[i]][start[j]]+S[start[j]][start[i]];
                    sumB+=S[link[i]][link[j]]+S[link[j]][link[i]];
                }
            }
            gapMin=gapMin>abs(sumA-sumB)?abs(sumA-sumB):gapMin;
        }
        return;
    }
    start.push_back(num);
    dfs(num+1);
    start.pop_back();
    
    link.push_back(num);
    dfs(num+1);
    link.pop_back();
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    cin>>N;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            cin>>S[i][j];
        }
    dfs(0);
    cout<<gapMin;
    return 0;
}
