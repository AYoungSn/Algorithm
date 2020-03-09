//
//  N-Queens9663.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/09.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
int N,col[14],cnt=0;
bool promising(int i){
    for(int j=0;j<i;j++)
        if(col[i]==col[j]||(i-j==abs(col[i]-col[j])))
            return false;
    return true;
}
void dfs(int i){//i가 행
    if(i==N)//i-1까지 놓인 퀸이 유망하면 i가 N까지 증가
        cnt++;
    else{
        for(int j=0;j<N;j++){
            col[i]=j;
            if(promising(i))
                dfs(i+1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    cin>>N;
    dfs(0);
    
    cout<<cnt;
    return 0;
}
