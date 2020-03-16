//
//  IntegerTriangle1932.cpp
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
    
    int N;
    cin>>N;
    int list[501][501];
    long long DP[501][501];
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++)
            cin>>list[i][j];
    }
    DP[1][1]=list[1][1];
    long long max=0;
    for(int i=2;i<=N;i++){
        for(int j=1;j<=i;j++){
            if(j==1)DP[i][1]=DP[i-1][j]+list[i][j];
            else if(j==i)DP[i][j]=DP[i-1][j-1]+list[i][j];
            else{
                DP[i][j]=list[i][j]+MAX(DP[i-1][j-1],DP[i-1][j]);
            }
        }
    }
    for(int i=1;i<=N;i++){
        if(max<DP[N][i])
            max=DP[N][i];
    }
    cout<<max;
    return 0;
}
