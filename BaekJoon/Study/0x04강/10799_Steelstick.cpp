//
//  10799_Steelstick.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/26.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string str;
    cin>>str;
    int cnt=0;
    stack<char> stac;
    for(int i=0;i<str.size();i++){
        if(!stac.empty()&&str[i]==')'){
            if(str[i-1]=='('){
                stac.pop();
                cnt+=stac.size();
            }else{
                stac.pop();
                cnt++;
            }
        }else if(str[i]=='(')
            stac.push(str[i]);
    }
    cout<<cnt;
}
