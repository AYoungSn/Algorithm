//
//  Hansu1065.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/30.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N, cnt=0;
    cin>>N;
    int arr[4];
    
    for(int i=1;i<=N;i++){
        if(i<100){
            cnt++;
            continue;
        }
        arr[0]=i%10;
        arr[1]=i/10%10;
        arr[2]=i/100%10;
        arr[3]=i/1000;
        int a=arr[0]-arr[1];
        if(arr[1]-arr[2]!=a)continue;
        if(arr[3]!=0){
            if(arr[2]-arr[3]!=a)continue;
        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}
