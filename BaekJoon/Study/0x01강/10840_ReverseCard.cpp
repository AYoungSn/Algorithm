//
//  10840_ReverseCard.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/05/10.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
#define SWAP(x,y,t) (t=x, x=y,y=t)
int main(){
    int card[20],tmp;
    for(int i=0;i<20;i++)
        card[i]=i+1;
    
    int a[10],b[10];
    for(int i=0;i<10;i++){
        cin>> a[i]>>b[i];
    }
    for(int i=0;i<10;i++){
        for(int j=a[i]-1, k=b[i]-1;j<k;j++,k--){
            SWAP(card[j],card[k],tmp);
        }
    }
    for(int i=0;i<20;i++)
        cout<<card[i]<<" ";
}
