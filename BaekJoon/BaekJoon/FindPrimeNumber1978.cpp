//
//  FindPrimeNumber1978.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/03.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    int cnt=0;
    int num[100];
    for(int i=0;i<N;i++){
        cin>>num[i];
    }
    for(int i=0;i<N;i++){
        if(num[i]>=2){
            cnt++;
            for(int j=2;j<=num[i]/2;j++)
                if(num[i]%j==0){
                    --cnt;
                    break;
                }
        }
    }
    
    cout<<cnt;
    return 0;
}
