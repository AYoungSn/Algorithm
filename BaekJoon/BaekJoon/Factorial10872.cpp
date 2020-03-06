//
//  Factorial10872.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/06.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>

int fac(int n){
    if(n==1||n==0)
        return 1;
    else
        return n*fac(n-1);
}

int main(){
    int N;
    scanf("%d",&N);
    if(N==0||N==1)
        printf("1");
    else
        printf("%d\n",N*fac(N-1));
    
    return 0;
}
