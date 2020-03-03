//
//  FlyAlphaCentauri1011.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/03.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int T;
    cin>> T;
    
    for(int i=0;i<T;i++){
        long long int x,y;
        cin>>x>>y;
        
        long long int length=y-x,l=1;
        unsigned int cnt=1;
        if(length==1){
            cout<<cnt<<"\n";
            continue;
        }
        while(length>l*l){
            l++;
            cnt+=2;
        }
        if(length<=l*l-l){
            cout<<cnt-1<<"\n";
            continue;
        }else{
            cout<<cnt<<"\n";
        }
    }
    
    return 0;
}
