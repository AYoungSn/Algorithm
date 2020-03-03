//
//  BreakEvenPoint1712.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/02.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    unsigned long int A,B,C;
    cin>>A>>B>>C;
  
    if(B>=C)
        cout<<-1;
    else{
        cout<<A/(C-B)+1;
    }
    return 0;
}
