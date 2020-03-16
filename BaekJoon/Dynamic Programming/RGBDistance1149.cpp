//
//  RGBDistance1149.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/13.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
#define MIN(x,y) (x>y?y:x)

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    int N,RGB[1001][3],DP[1001][3];
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>RGB[i][0]>>RGB[i][1]>>RGB[i][2];
    }
    DP[1][0]=RGB[1][0];
    DP[1][1]=RGB[1][1];
    DP[1][2]=RGB[1][2];
    for(int i=2;i<=N;i++){
        DP[i][0]=RGB[i][0]+MIN(DP[i-1][1],DP[i-1][2]);
        DP[i][1]=RGB[i][1]+MIN(DP[i-1][0],DP[i-1][2]);
        DP[i][2]=RGB[i][2]+MIN(DP[i-1][0],DP[i-1][1]);
    }
    cout<<MIN(DP[N][0],MIN(DP[N][1],DP[N][2]));
    return 0;
}
