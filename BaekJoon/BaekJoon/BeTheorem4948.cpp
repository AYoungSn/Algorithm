//
//  BeTheorem4948.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/04.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    int arr[246913];
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<246913;i++)
        arr[i]=i;
    
    for(int i=2;i<246913;i++){
        if(arr[i]==0)
            continue;
        for(int j=i+i;j<=246912;j+=i)
            arr[j]=0;
    }
    while(true){
        cin>>N;
        if(N==0)
            break;
        
        int cnt=0;
        for(int i=N+1;i<=2*N;i++){
            if(arr[i]!=0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}
