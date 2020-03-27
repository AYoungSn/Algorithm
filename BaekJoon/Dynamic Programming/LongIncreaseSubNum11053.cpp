//
//  LongIncreaseSubNum11053.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/16.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N,A[1000];
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>A[i];
    
    int max=1,DP[1001];
    DP[0]=0;
    for(int i=0;i<N;i++){
        int ma=0;
        for(int j=0;j<i;j++){
            if(A[i]>A[j]&&ma<DP[j])
                ma=DP[j];
        }
        DP[i]=ma+1;
        if(max<DP[i]){
            max=DP[i];
        }
    }
    cout<<max;
    
    return 0;
}
