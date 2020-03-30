//
//  PrintStar10996.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/30.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    char star[100][2];
    for(int i=0;i<100;i+=2){
        star[i][0]=star[i+1][1]='*';
        star[i+1][0]=star[i][1]=' ';
    }
    int N;
    cin>>N;
    if(N==1){
        printf("*");
        return 0;
    }
    for(int i=0;i<N*2;i+=2){
        for(int j=0;j<N;j++)
            cout<<star[j][0];
        cout<<"\n";
        for(int j=0;j<N;j++)
            cout<<star[j][1];
        cout<<"\n";
    }
}
