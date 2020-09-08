//
//  9466_TermProject.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/08/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int stud[100001],cnt;
bool visit[100001], done[100001];

void DFS(int nodeN){
    visit[nodeN]=true;
    int next=stud[nodeN];
    if(!visit[next])
        DFS(next);
    else if(!done[next]){
        for(int i=next;i!=nodeN;i=stud[i])
            cnt++;
        cnt++;
    }
    done[nodeN]=true;
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    int T,N;
    cin>>T;
    for(int i=0;i!=0;i++)
        cout<<i;
    for(int t=0;t<T;t++){
        cin>>N;
        for(int n=1;n<=N;n++)
            cin>>stud[n];
        for(int i=1;i<=N;i++){
            visit[i]=done[i]=false;
        }
        cnt=0;
        for(int j=1;j<=N;j++){
            if(!visit[j])
                DFS(j);
        }
        cout<<N-cnt<<"\n";
    }
    
    return 0;
}
