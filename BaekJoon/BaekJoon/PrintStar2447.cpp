//
//  PrintStar2447.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/06.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>
int N;
char arr[2187][2187];
void star(int r, int c, int n){
    if(n==1){
        arr[r][c]='*';
        return;
    }
    //배열을 3*3분할
    int div=n/3;
    //div가 1일때 j,i가 하나씩
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==1&&j==1){
                continue;
            }
            star(i*div+r,j*div+c,div);
            //r,c -> 분할된 배열의 시작점
            //div -> 현재 배열의 행/열 3등분한 크기
            //i, j -> 가로세로를 3분할 했을 때 인덱스
        }
    }
    
}
int main(){
    scanf("%d",&N);
    for(int i=0;i<2187;i++)
        for(int j=0;j<2187;j++)
            arr[i][j]=' ';
    
    star(0,0,N);

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            printf("%c",arr[i][j]);
        printf("\n");
    }
    return 0;
}
