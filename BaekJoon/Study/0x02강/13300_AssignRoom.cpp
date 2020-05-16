//
//  13300_AssignRoom.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/14.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    int N, K,S[1000], Y[1000],SY[2][7];
    cin>>N>>K;
    for(int i=1;i<7;i++)
        SY[0][i]=SY[1][i]=0;
    
    for(int n=0;n<N;n++){
        cin>>S[n]>>Y[n];
        SY[S[n]][Y[n]]++;
    }
    int room=0;
    for(int i=1;i<7;i++){
        if(SY[0][i]!=0){
            room+=SY[0][i]/K;
            room+=SY[0][i]%K==0?0:1;
        }
        if(SY[1][i]!=0){
            room+=SY[1][i]/K;
            room+=SY[1][i]%K==0?0:1;
        }
    }
    cout<<room<<"\n";
}
