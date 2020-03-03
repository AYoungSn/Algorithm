//
//  SugarDelivery2839.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/02.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    int b3=0,b5=0;
    
    b3=(N%5);
    b5=N/5;
    if(b3==0){
        cout<<b5;
        return 0;
    }else if(b3==3){
        cout<<b5+1;
        return 0;
    }else{
        while(b5>0){
        b5--;
        b3+=5;
        if(b3%3==0){
            cout<<b5+(b3/3);
            return 0;
        }
        }
    }
    cout<<-1;
    
    return 0;
}
