//
//  ExitSquare1085.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/05.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int x,y,w,h;
    cin>> x>>y>>w>>h;
    
    int miny,minx;
    miny= (h-y<=y?h-y:y);
    minx=(w-x<=x?w-x:x);
    
    cout<<(minx<=miny?minx:miny);
    
    return 0;
}
