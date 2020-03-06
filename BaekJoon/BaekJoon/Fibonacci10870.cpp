//
//  Fibonacci10870.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/06.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>

int fibo(int n){
    if(n<2)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}

int main(){
    int N;
    scanf("%d",&N);
    
    printf("%d",fibo(N));
    
    return 0;
}
