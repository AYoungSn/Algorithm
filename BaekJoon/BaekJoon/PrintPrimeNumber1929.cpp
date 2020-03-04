//
//  PrintPrimeNumber1929.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/04.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

int main(){
    //에라토스테네스의 체 알고리즘
    //2부터 시작해서 배수를 제거해 소수를 찾는 알고리즘
    clock_t begin, end;
    
    int M,N;
    cin>>M>>N;
    begin=clock();
  
    int arr[1000001];
    arr[1]=0;
    arr[0]=0;
    for(int i=2;i<=N;i++){
        arr[i]=i;
    }
    
    for(int i=2;i<=N;i++){
        if(arr[i]==0)
            continue;
        for(int j=i+i;j<=N;j+=i)
            arr[j]=0;
    }
    
    for(int i=M;i<=N;i++){
        if(arr[i]!=0){
            printf("%d\n",arr[i]);
        }
    }
    
    end=clock();
    
    printf("\n수행시간: %f\n",(double)(end-begin)/100000.0);
    return 0;
}
