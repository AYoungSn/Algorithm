//
//  MinPrimeNumber2581.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/04.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main(){
    int M,N;
    cin>> M>>N;
    clock_t begin, end;
    begin=clock();
    
    int min=10000;
    int psum=0;
    bool isPrime=true;
    for(int i=M;i<=N;i++){
        isPrime=true;
        if(i==1||(i>2&&i%2==0))
            isPrime=false;
        else{
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    isPrime=false;
                }
            }
            if(isPrime){
                psum+=i;
                if(min>i)
                    min=i;
            }
        }
    }
    if(psum==0){
        cout<<-1;
        return 0;
    }
    cout<<psum <<"\n"<<min;
    end=clock();
    
    printf("\n수행시간: %f\n",(double)(end-begin)/100000.0);
    return 0;
}
