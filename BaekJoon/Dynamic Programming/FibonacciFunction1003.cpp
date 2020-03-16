//
//  FibonacciFunction1003.cpp
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
    int T,N, cnting[41][2];
    cin>>T;
    cnting[0][0]=1;
    cnting[0][1]=0;
    cnting[1][0]=0;
    cnting[1][1]=1;
    for(int i=2;i<41;i++){
        cnting[i][0]=cnting[i-1][0]+cnting[i-2][0];
        cnting[i][1]=cnting[i-1][1]+cnting[i-2][1];
    }
    for(int i=0;i<T;i++){
        cin>>N;
        cout<<cnting[N][0]<<" "<<cnting[N][1]<<"\n";
    }
    return 0;
}
