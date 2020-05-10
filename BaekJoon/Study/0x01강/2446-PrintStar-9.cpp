//
//  2446-PrintStar-9.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/05/10.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        for(int j=0;j<(N-i)*2-1;j++)
            cout<<"*";
        cout<<"\n";
    }
    for(int i=N-2;i>=0;i--){
        for(int j=0;j<i;j++)
            cout<<" ";
        for(int j=0;j<(N-i)*2-1;j++)
            cout<<"*";
        cout<<"\n";
    }
}
