//
//  1874_StackArray.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/21.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    int N;
    cin>>N;
    int arr[100000];
    
    stack<int> sta;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    char str[200000];
    int ind=0;
    for(int i=0,num=1;i<N;i++){
        for(int cnt=0;(sta.empty()||sta.top()!=arr[i])&&cnt<N-i;cnt++){
            str[ind++]='+';
            sta.push(num++);
        }
        if(sta.top()==arr[i]){
            str[ind++]='-';
            sta.pop();
        }else
            break;
    }
    if(!sta.empty())
        cout<<"NO";
    else{
        for(int i=0;i<ind;i++)
            cout<<str[i]<<"\n";
    }
}
