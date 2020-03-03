//
//  Chairman2775.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/03.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >>T;
    int k,n;
    int apart[15][14]={{1,2,3,4,5,6,7,8,9,10,11,12,13,14}};
    for(int i=1;i<15;i++){
        apart[i][0]=1;
        for(int j=1;j<14;j++){
            apart[i][j]=apart[i][j-1]+apart[i-1][j];
        }
    }
    for(int i=0;i<T;i++){
        cin>>k;
        cin>>n;
        cout<<apart[k][n-1]<<"\n";
    }
    return 0;
}
