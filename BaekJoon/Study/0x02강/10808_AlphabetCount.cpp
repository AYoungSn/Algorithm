//
//  10808_AlphabetCount.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/10.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin>>S;
    int al[26];
    for(int i=0;i<26;i++)
        al[i]=0;
    
    for(int i=0;i<S.size();i++){
        al[S[i]-'a']++;
    }
    for(int i=0;i<26;i++)
        cout<<al[i]<<" ";
}
