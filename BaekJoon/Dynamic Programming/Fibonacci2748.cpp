//
//  Fibonacci2748.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/12.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    int N;
    cin>>N;
    long long n1=0,n2=1,fibo;
    if(N>=2){
        for(int cnt=2;cnt<=N;cnt++){
            fibo=n1+n2;
            n1=n2;
            n2=fibo;
        }
        cout<<fibo;
    }else{
        cout<<(N==0?0:1);
    }
    
    return 0;
}
