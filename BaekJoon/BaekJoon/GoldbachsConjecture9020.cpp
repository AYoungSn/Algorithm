//
//  GoldbachsConjecture9020.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/04.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int T,N;
    cin>>T;
    int arr[10001];
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=10000;i++){
        arr[i]=i;
    }
    for(int i=2;i<=10000;i++){
        if(arr[i]==0)
            continue;
        for(int j=i+i;j<=10000;j+=i){
            arr[j]=0;
        }
    }
    
    for(int i=0;i<T;i++){
        cin>>N;
        for(int j=N/2,k=j;j>1;j--,k++){
            if(arr[j]!=0&&arr[k]!=0&&j+k==N){
                cout<<j<<" "<<k<<endl;
                break;
            }
        }
    }
    
    return 0;
}
