//
//  Triangle4153.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/05.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX(a,b) ((a)>(b)?(a):(b))
#define SWAP(x,y,t) ((t)=(x),(x=y),y=t)

int main(){
    unsigned int a,b,c,t;
    
    while(true){
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)
            break;
        
        int max=MAX(a,b);
        
        if(max!=b)
            SWAP(a,b,t);
        max=MAX(b,c);
        if(max!=c)
            SWAP(b,c,t);
        
        if(a*a+b*b==c*c)
            cout<<"right"<<endl;
        else{
            cout<<"wrong"<<endl;
        }
    }
    
    return 0;
}
