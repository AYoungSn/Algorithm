//
//  GrapeJuice2156.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/14.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX(x,y) (x>y?x:y)

int main(){
    int N,bs[10000],i=0;
    cin>>N;
    for(;i<N;i++)
        cin>>bs[i];
    
    int DP[10000];
    DP[0]=bs[0];
    DP[1]=bs[0]+bs[1];
    DP[2]=MAX(DP[1],MAX(bs[0]+bs[2],bs[1]+bs[2]));
    long long int max=MAX(DP[0],MAX(DP[1],DP[2]));
    for(i=3;i<N;i++){
        DP[i]=MAX(DP[i-2]+bs[i],MAX(DP[i-1],DP[i-3]+bs[i-1]+bs[i]));
        max=MAX(max,DP[i]);
    }
    cout<<max;
    
    return 0;
}
