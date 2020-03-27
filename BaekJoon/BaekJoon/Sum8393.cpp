//
//  Sum8393.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum+=i;
    printf("%d",sum);
}
