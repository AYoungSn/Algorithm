//
//  10807_Counting.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/10.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N,v,cnt=0;
    cin>>N;
    int arr[100];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    cin>>v;
    for(int i=0;i<N;i++){
        if(v==arr[i])
            cnt++;
    }
    cout<<cnt;
}
