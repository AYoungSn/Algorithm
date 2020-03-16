//
//  01Tile1904.cpp
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
    
    int N,cnt[1000001];
    cin>>N;
    cnt[1]=1;
    cnt[2]=2;
    for(int i=3;i<=N;i++){
        cnt[i]=cnt[i-1]+cnt[i-2];
        cnt[i]%=15746;
    }
    cout<<cnt[N];
    return 0;
}
