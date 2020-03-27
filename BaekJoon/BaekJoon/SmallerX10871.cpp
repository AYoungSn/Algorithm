//
//  SmallerX10871.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>

int main(){
    int N,X,a;
    scanf("%d %d",&N,&X);
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        if(a<X)
            printf("%d ",a);
    }
}
