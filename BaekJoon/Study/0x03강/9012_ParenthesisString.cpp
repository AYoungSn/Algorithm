//
//  9012_ParenthesisString.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/21.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int T;
    cin>>T;
    string vps;
    stack<char> sta,clos;
    bool check;
    char ps;
    for(int t=0;t<T;t++){
        check=true;
        cin>>vps;
        for(int i=0;i<vps.size();i++)
            sta.push(vps[i]);
        for(int i=0;i<vps.size();i++){
            ps=sta.top();
            sta.pop();
            if(clos.empty()&&ps=='('){
                check=false;
                break;
            }else if(ps==')'){
                clos.push(ps);
            }else{
                clos.pop();
            }
        }
        if(!sta.empty()||!clos.empty()||!check){
            cout<<"NO\n";
        }else if(check)
            cout<<"YES\n";
        while(!sta.empty())
            sta.pop();
        while(!clos.empty())
            clos.pop();
    }
}

