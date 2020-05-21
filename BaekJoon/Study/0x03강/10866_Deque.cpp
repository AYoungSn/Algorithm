//
//  Dequeue.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/21.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
const int MX=10001;
int dequeue[MX*2];
int front=MX, back=MX;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    int N;
    cin>>N;
    string str;
    int t;
    for(int i=0;i<N;i++){
        cin>>str;
        if(str=="push_front"){
            cin>>t;
            dequeue[--front]=t;
        }else if(str=="push_back"){
            cin>>t;
            dequeue[back++]=t;
        }else if(str=="pop_front"){
            if(front==back) cout<<"-1\n";
            else cout<<dequeue[front++]<<"\n";
        }else if(str=="pop_back"){
            if(front==back) cout<<"-1\n";
            else cout<<dequeue[--back]<<"\n";
        }else if(str=="size"){
            cout<<back-front<<"\n";
        }else if(str=="empty"){
            if(front==back)
                cout<<"1\n";
            else cout<<"0\n";
        }else if(str=="front"){
            if(front==back)
                cout<<"-1\n";
            else
                cout<<dequeue[front]<<"\n";
        }else{
            if(front==back)
                cout<<"-1\n";
            else
                cout<<dequeue[back-1]<<"\n";
        }
    }
}
