//
//  InsertOperator14888.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/10.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int N,add,minuss,multip,divide,A[11];
long long minimum=1000000000, maximum=-1000000000;
vector<char> op;//연산자들을 갯수대로 저장하기 위한 변수
bool used[10];
void dfs(long long result, int index, int num){
    if(index==N){
        if(result>maximum)
            maximum=result;
        if(result<minimum)
            minimum=result;
        return;
    }
    for(int i=0;i<N-1;i++){
        if(used[i])continue;
        used[i]=true;
        switch (op[i]) {
            case '+':
                dfs(result+A[index],index+1,i+1);
                break;
            case '-':
                dfs(result-A[index],index+1,i+1);
                break;
            case '*':
                dfs(result*A[index],index+1,i+1);
                break;
            case '/':
                dfs(result/A[index],index+1,i+1);
        }
        used[i]=false;
    }
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    cin>>add>>minuss>>multip>>divide;
    
    for(int i=0;i<N-1;i++){
        if(i<add)op.push_back('+');
        else if(i<add+minuss)op.push_back('-');
        else if(i< add+minuss+multip)op.push_back('*');
        else op.push_back('/');
    }

    dfs(A[0],1,0);
    
    cout<<maximum<<"\n"<<minimum;
    
    return 0;
}
