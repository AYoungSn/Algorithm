//
//  EasyStairsNum10844.cpp
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
    int N, list[101][10];
    cin>>N;
    list[1][0]=0;
    for(int i=1;i<10;i++){
        list[1][i]=1;
    }
    long long int sum=0;
    for(int i=2;i<=N;i++){
        list[i][0]=list[i-1][1];
        for(int j=1;j<10;j++){
            if(j==9)
                list[i][j]=list[i-1][j-1];
            else
                list[i][j]=(list[i-1][j-1]+list[i-1][j+1])%1000000000;
        }
    }
    for(int i=0;i<10;i++)
        sum+=list[N][i];
    
    cout<<sum%1000000000;
    return 0;
}
