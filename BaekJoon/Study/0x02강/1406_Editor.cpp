//
//  1406_Editor.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/10.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    list<char> N;
    string ss,op,t;
    int M;
    cin>>ss>>M;
    getline(cin, t);
    for(int i=0;i<ss.size();i++){
        N.push_back(ss[i]);
    }
    auto cursor=N.end();
    
    for(int i=0;i<M;i++){
        getline(cin, op);
        if(op[0]=='L'){
            if(cursor!=N.begin())
                cursor--;
        }else if(op[0]=='D'){
            if(cursor!=N.end())
                cursor++;
        }else if(op[0]=='B'){
            if(cursor!=N.begin()){
                cursor--;
                cursor=N.erase(cursor);
            }
        }else{
            N.insert(cursor,op[2]);
        }
    }
    for(auto c:N)
        cout<<c;
}
