//
//  GroupWordChecker1316.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/02.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    string word[100];
    cin >>N;
    
    for(int i=0;i<N;i++)
        cin >> word[i];
    
    int cnt=0;
    bool groupword=true;
    for(int i=0;i<N;i++){
        groupword=true;
        for(int j=0;j<word[i].length()-1;j++){
            if(word[i][j]!=word[i][j+1]){
                for(int k=j+1;k<word[i].length();k++){
                    if(word[i][j]==word[i][k]){
                        groupword=false;
                        break;
                    }
                }
            }
            
        }
        if(groupword)
        cnt++;
    }
    cout<<cnt;
    
    return 0;
}
