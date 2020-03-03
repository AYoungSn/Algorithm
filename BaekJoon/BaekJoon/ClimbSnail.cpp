//
//  ClimbSnail.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/03.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int A,B,V;
    cin>>A>>B>>V;
    
    int top=((V-A)/(A-B))*(A-B), day=(V-A)/(A-B);
    if(A==V){
        cout<<1;
        return 0;
    }
    while(top<V){
        day++;
        top+=A;
        if(top>=V)
            break;
        top-=B;
    }
    cout<<day;
    return 0;
}
