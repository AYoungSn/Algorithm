//
//  1919_Anagram.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/14.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    int al1[27],al2[27];
    fill(al1,al1+27,0);
    fill(al2,al2+27,0);
    
    for(int i=0;i<s1.size();i++){
        al1[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++){
        al2[s2[i]-'a']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(al1[i]!=al2[i]){
            cnt+=abs(al1[i]-al2[i]);
        }
    }
    cout<<cnt;
}
