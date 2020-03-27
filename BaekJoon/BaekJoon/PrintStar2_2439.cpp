//
//  PrintStar2_2439.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++)
            printf("%c",'*');
        printf("\n");
    }
}
