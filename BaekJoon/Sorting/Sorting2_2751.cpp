//
//  Sorting2_2751.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/07.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>
int N, list[1000000], arr[1000000];
void merge(int left, int mid, int right){
    int m=mid+1, i=left, low=left;
    while(low<=mid&&m<=right){
        if(list[low]<list[m])
            arr[i++]=list[low++];
        else
            arr[i++]=list[m++];
    }
    if(low>mid)
        for(;m<=right;m++)
            arr[i++]=list[m];
    else
        for(;low<=mid;low++)
            arr[i++]=list[low];
    
    for(int k=left;k<=right;k++)
        list[k]=arr[k];
}
void merge_sort(int left, int right){
    if(left<right){
        int mid=(left+right)/2;
        merge_sort(left, mid);
        merge_sort(mid+1, right);
        merge(left,mid,right);
    }
}
int main(){
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%d",list+i);
    
    merge_sort(0, N-1);
    
    for(int i=0;i<N;i++)
        printf("%d\n",list[i]);
    
    return 0;
}
