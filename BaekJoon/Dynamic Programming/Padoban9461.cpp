//
//  Padoban9461.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/13.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    int T,N;
    long long arr[101];
    cin>>T;
    arr[0]=arr[1]=arr[2]=arr[3]=1;
    arr[4]=arr[5]=2;
    for(int i=6;i<=100;i++){
        arr[i]=arr[i-5]+arr[i-1];
    }
    for(int t=0;t<T;t++){
        cin>>N;
        cout<<arr[N]<<"\n";
    }
    
    return 0;
}
