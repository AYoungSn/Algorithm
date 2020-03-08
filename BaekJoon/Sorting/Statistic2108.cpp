//
//  Statistic2108.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/07.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int list[8001],arr[500000];
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin>>N;
    
    int i=0,sum=0,min=4000,max=-4000,in,many, manyIndex;
    for(;i<N;i++){
        cin>>in;
        sum+=arr[i]=in;
        list[in+4000]++;
        max=in>max?in:max;
        min=in<min?in:min;
    }
    cout<<sum<<"\n";
    cout<<(int)round((double)sum/N)<<"\n";
    
    sort(arr,arr+N);
    printf("%d\n",arr[N/2]);
    
    many=list[min+4000];
    manyIndex=min+4000;
    bool check=false;
    for(i=min+4000;i<=max+4000;i++){
        if(many>list[i]||i==min+4000)
            continue;
        else if(many==list[i]){
            check=true;
        }else{
            many=list[i];
            manyIndex=i;
            check=false;
        }
    }
    if(check){
        for(i=manyIndex+1;i<=max+4000;i++)
            if(many==list[i]){
                many=list[i];
                manyIndex=i;
                break;
            }
    }
    
    printf("%d\n",manyIndex-4000);
    printf("%d\n",max-min);
    
    return 0;
}
