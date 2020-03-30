//
//  PlusCycle1110.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/30.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int N[2],t;
    cin>>t;
    N[0]=t/10;
    N[1]=t%10;
    int n,cnt=0;
    do{
        cnt++;
        n=N[0]+N[1];
        N[0]=N[1];
        N[1]=n%10;
    }while(N[0]*10+N[1]!=t);
    cout<<cnt;
    
    return 0;
}
