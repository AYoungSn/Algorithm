//
//  2441_PrintStar-4.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/05/10.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=N;i>0;i--){
        string ss;
        for(int j=0;j<N-i;j++)
            ss.append(" ");
        for(int j=0;j<i;j++)
            ss.append("*");
        cout<<ss<<"\n";
    }
}

