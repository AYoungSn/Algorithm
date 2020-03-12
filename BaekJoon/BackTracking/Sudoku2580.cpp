//
//  Sudoku2580.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/09.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX 9
int table[MAX][MAX],N=81;
bool squarecheck[MAX][10], Row[MAX][10], Col[MAX][10];
bool promising(int row, int col, int num){
    if(Row[row][num]||Col[col][num]||squarecheck[row/3*3+col/3][num]){
        return false;
    }
    return true;
}
void Print(){
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++)
            cout<<table[i][j]<<" ";
        cout<<"\n";
    }
    exit(0);
}
void dfs(int cnt){
    if(cnt==N){
        Print();
    }
    
    int i=cnt/9,j=cnt%9;
    if(table[i][j]!=0){
//        현재 칸이 채워져있으면 다음 칸 탐색
        dfs(cnt+1);
    }else{
        for(int k=1;k<=MAX;k++){
            if(promising(i, j, k)){
//                k값이 유망하면 일단 삽입
                table[i][j]=k;
                Row[i][k]=Col[j][k]=squarecheck[i/3*3+j/3][k]=true;
                dfs(cnt+1);//채워진 칸의 개수 증가
//                k를 넣었을 때 나머지 칸을 채울수 없는 경우 k값 취소
                table[i][j]=0;
                Row[i][k]=Col[j][k]=squarecheck[i/3*3+j/3][k]=false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);

    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++){
            cin>>table[i][j];
            Row[i][table[i][j]]=true;
            Col[j][table[i][j]]=true;
            squarecheck[i/3*3+j/3][table[i][j]]=true;
        }
    dfs(0);
        
    return 0;
}
