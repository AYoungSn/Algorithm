//
//  MakeOne1463.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/13.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
#define MIN(x,y) (x<y?x:y)

int main(){
    int N;
    cin>>N;
    
    int list[1000001];
    list[1]=0;
    list[2]=list[3]=1;
    
    for(int i=4;i<=N;i++){
        list[i]=list[i-1]+1;
        if(i%2==0){
            list[i]=MIN(list[i], list[i/2]+1);
        }
        if(i%3==0){
            list[i]=MIN(list[i], list[i/3]+1);
        }
    }
    
    cout<<list[N];
    
    return 0;
}
