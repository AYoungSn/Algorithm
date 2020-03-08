//
//  Sorting2750.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/06.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    
    int arr[1000];
    
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int index=0, min;
    for(int i=0;i<N-1;i++){
        index=i;
        min=arr[i];
        for(int j=i+1;j<N;j++){
            if(min>arr[j]){
                index=j;
                min=arr[j];
            }
        }
        if(index!=i){
            arr[index]=arr[i];
            arr[i]=min;
        }
        printf("%d\n",arr[i]);
    }
    printf("%d\n",arr[N-1]);
    return 0;
}
