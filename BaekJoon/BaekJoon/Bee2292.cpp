//
//  Bee2292.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/03.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int cnt=1;
    for(int i=1;;i++){
        if(N>cnt){
            cnt+=6*i;
        }else{
            cout<<i;
            return 0;
        }
    }
    
    return 0;
}
