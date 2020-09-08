//
//  1926_Paint.c
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/06/03.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
int max_size=0, size=0, cnt=0, n, m, paint[502][502];
bool check[502][502]={false};

void paint_(int row, int col){
    if(!check[row][col]){
        check[row][col]=true;
        if(paint[row][col]==1){
            size++;
            if(row<n){
                paint_(row+1,col);
                if(row>0){
                    paint_(row-1, col);
                }
            }
            if(col<m){
                paint_(row, col+1);
                if(col>0)
                    paint_(row, col-1);
            }
        }
    }
}

int main(){
    int i,j;

    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cin>>paint[i][j];
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(check[i][j]==true||paint[i][j]==0)continue;
            size=0;
            paint_(i, j);
            cnt++;
            if(max_size<size)
                max_size=size;
        }
        
    }
    
    cout<<cnt<<"\n"<<max_size<<"\n";
}
