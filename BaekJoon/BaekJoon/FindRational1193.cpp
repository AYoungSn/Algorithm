//
//  FindRational1193.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/03.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int X;
    cin>>X;
    
    int i, r=1,cnt=0;

    for(i=3;r<X;i+=4){
        r+=i;
        cnt+=2;
    }
    if(r==X){
        cout<<cnt+1<<"/"<<1;
        return 0;
    }
    
    for(int j=cnt,k=1;k<=cnt;j--,k++){
        r--;
        if(r==X){
            cout<<j<<"/"<<k;
            return 0;
        }
    }
    
    for(int j=1,k=cnt-1;j<cnt-1;j++,k--){
        r--;
        if(r==X){
            cout<<j<<"/"<<k;
            return 0;
        }
    }
    
    return 0;
}
