//
//  SortCoordinates2_11651.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/08.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

class XY{
public:
    int x,y;
    bool operator <(XY &xy){
        if(this->y == xy.y)
            return this->x < xy.x;
        return this->y < xy.y;
    }
};
int compare(XY &xy1, XY &xy2){
    return xy1 < xy2;
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    int N,i=0;
    cin>>N;
    XY xy[100000];
    
    for(;i<N;i++)
        cin>>xy[i].x>>xy[i].y;
    
    sort(xy,xy+N,compare);
    
    for(i=0;i<N;i++)
        cout<<xy[i].x<<" "<<xy[i].y<<"\n";
    
    
    return 0;
}
