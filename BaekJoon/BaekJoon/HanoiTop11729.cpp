//
//  HanoiTop11729.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/06.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>
#include <cmath>

void hanoi(int n, int from, int by, int to){
    if(n==1)
        printf("%d %d\n",from, to);
    else{
        hanoi(n-1,from, to, by);//n-1개의 원판을 두번째 장대로 이동
        printf("%d %d\n",from, to);//크기 n인 원판을 3번째 장대로 이동
        hanoi(n-1, by, from, to);//두번째 장대로 옮겨둔 n-1개의 원판을 3번째 장대로 이동
    }
}
int main(){
    int N;
    scanf("%d",&N);
    printf("%d\n",(int)pow(2,N)-1);
    //하노이탑의 최소 이동 값은 2^N-1
    hanoi(N,1,2,3);
    return 0;
}
