//
//  2493_Top.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
unsigned int arr[500001];
stack<pair<int,int>> ans;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    int N,i,rec;
    cin>>N;
    for(i=0;i<N;i++){
        cin>> arr[i];
    }
    for(i=0;i<N;i++){
        rec=0;
        if(i<1){
            rec=0;
            ans.push({i+1,arr[i]});
        }else{
            while(!ans.empty()&&ans.top().second<arr[i]){
                ans.pop();
            }
            rec=ans.empty()?0:ans.top().first;
            ans.push({i+1,arr[i]});
        }
        cout<<rec<<" ";
    }
}
