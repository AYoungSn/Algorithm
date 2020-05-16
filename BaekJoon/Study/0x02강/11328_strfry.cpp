//
//  11328_strfry.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/14.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    cin >>T;
    
    string str[2];
    int alpha[2][26];
    bool isposs;
    for(int t=0;t<T;t++){
        cin>>str[0]>>str[1];
        for(int i=0;i<2;i++){
            fill(alpha[i],alpha[i]+26,0);
        }
        isposs=false;
        if(str[0].size()==str[1].size()){
            isposs=true;
            for(int i=0;i<str[0].size();i++){
                alpha[0][str[0][i]-'a']++;
                alpha[1][str[1][i]-'a']++;
            }
            for(int i=0;i<26;i++)
                if(alpha[0][i]!=alpha[1][i]){
                    isposs=false;
                    break;
                }
        }
        if(isposs)
            cout<<"Possible\n";
        else cout<<"Impossible\n";
    }
}
