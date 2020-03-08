//
//  Sorting3_10989.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/07.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>
int list[10001],cnt;
int main(){
    int N,i,t;
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        scanf("%d",&t);
        list[t]++;
    }
    
    for(i=0;i<=10000&&cnt<N;i++){
        if(list[i]==0)continue;
        for(int j=0;j<list[i];j++)
            printf("%d\n",i);
        cnt+=list[i];
    }
    return 0;
}
