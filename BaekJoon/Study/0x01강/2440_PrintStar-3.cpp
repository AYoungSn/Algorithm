//
//  2440_PrintStar-3.cpp
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
    for(int i=N;i>0;i--){
        for(int j=0;j<i;j++)
            cout<<"*";
        cout<<"\n";
    }
}
