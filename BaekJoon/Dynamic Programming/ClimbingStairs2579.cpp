//
//  ClimbingStairs2579.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/13.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX(x,y) (x>y?x:y)
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    int N,stairs[301];
    cin>>N;
    for(int i=1;i<=N;i++)
        cin>>stairs[i];
    
    long long DP[301];
    DP[1]=stairs[1];
    DP[2]=MAX(DP[1]+stairs[2],stairs[2]);
    DP[3]=MAX(stairs[1]+stairs[3],stairs[2]+stairs[3]);
    //시작점이 1->3, 시작점이 2->3
    for(int i=4;i<=N;i++){
        DP[i]=MAX(DP[i-3]+stairs[i-1]+stairs[i],DP[i-2]+stairs[i]);
        //바로 전 계단을 밟고 온 경우 3개 전까지의 총합에 전 계단과 현재 계단 점수를 더함
        //두개 전 계단을 밟은경우 2개 전까지의 합에 현재계단 점수 합
    }
    cout<<DP[N];
    return 0;
}
