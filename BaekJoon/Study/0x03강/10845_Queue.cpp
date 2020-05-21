//
//  10845_Queue.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/21.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int N;
    cin>>N;
    string str;
    int t;
    queue<int> Q;
    for(int i=0;i<N;i++){
        cin>>str;
        if(str=="push"){
            cin>>t;
            Q.push(t);
        }else if(str=="pop"){
            if(Q.empty())
                cout<<"-1\n";
            else{
                cout<<Q.front()<<"\n";
                Q.pop();
            }
        }else if(str=="size"){
            cout<<Q.size()<<"\n";
        }else if(str=="empty"){
            if(Q.empty())
                cout<<"1\n";
            else cout<<"0\n";
        }else if(str=="front"){
            if(Q.empty())
                cout<<"-1\n";
            else{
                cout<<Q.front()<<"\n";
            }
        }else{
            if(Q.empty())
                cout<<"-1\n";
            else
                cout<<Q.back()<<"\n";
        }
    }
}
