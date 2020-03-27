//
//  multiplication.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=9;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
