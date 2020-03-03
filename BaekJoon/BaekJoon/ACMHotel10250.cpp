//
//  ACMHotel10250.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/03.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int T;
    cin>> T;
    for(int i=0;i<T;i++){
        int H,W,N;
        cin>> H>> W>> N;
        int x=N%H;
        int y=N/H+1;
        if(x==0){
            x=H;
            y--;
        }
        cout<< x*100+y<<"\n";
    }
    
    return 0;
}
