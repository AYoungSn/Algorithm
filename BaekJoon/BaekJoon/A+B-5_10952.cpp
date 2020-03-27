//
//  A+B-5_10952.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=0&&b!=0){
        printf("%d\n",a+b);
        scanf("%d %d",&a,&b);
    }
}
