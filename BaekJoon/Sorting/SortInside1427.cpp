//
//  SortInside1427.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/08.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
#define SWAP(x,y,t) (t=x,x=y,y=t)

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);
    
    string N;
    cin>>N;
    int arr[10],i=0;
    for(;i<N.length();i++)
        arr[i]=N[i]-'0';
    
    int maxInd,max,t;
    
    for(i=0;i<N.length()-1;i++){
        max=arr[i];
        maxInd=i;
        for(int j=i+1;j<N.length();j++){
            if(max<arr[j]){
                max=arr[j];
                maxInd=j;
            }
        }
        SWAP(arr[i],arr[maxInd],t);
        cout<<arr[i];
    }
    cout<<arr[N.length()-1];
    return 0;
}
