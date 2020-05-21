//
//  10828_Stack.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/21.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    int N,t;
    cin>>N;
    string str;
    stack<int> s;
    for(int i=0;i<N;i++){
        cin>>str;
        if(str=="push"){
            cin>>t;
            s.push(t);
        }else if(str=="top"){
            if(s.empty())
                cout<<"-1\n";
            else
                cout<<s.top()<<"\n";
        }else if(str=="pop"){
            if(s.empty())
                cout<<"-1\n";
            else{
                cout<<s.top()<<"\n";
                s.pop();
            }
        }else if(str=="size"){
            cout<<s.size()<<"\n";
        }else{
            if(s.empty())
                cout<<"1\n";
            else
                cout<<"0\n";
        }
        
    }
    
}
