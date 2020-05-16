//
//  1475_RoomNumber.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/14.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    string N;
    cin>>N;
    int set[10], cnt=1;
    fill(set,set+10,0);
    for(int i=0;i<N.length();i++){
        set[N[i]-'0']++;
    }
    set[6]=(set[6]+set[9])/2+(set[6]+set[9])%2;
    for(int i=0;i<9;i++){
        if(cnt<set[i])
            cnt=set[i];
    }
    cout<<cnt;
}
