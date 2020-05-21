//
//  5430_AC.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/21.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
    int T,n;
    cin>>T;
    string p,tmp;

    int X[100001], head=0,tail,cur;
    bool check=true;
    for(int t=0;t<T;t++){
        check=true;
        cin>>p>>n;
        cin>>tmp;
        
        head=cur=0;
        tail=n;
        
        for(int i=1,j=0;i<tmp.size()-1;i++){
            int k=i;
            while(tmp[k]!=','&&k+1<tmp.size()){
                k++;
            }
            X[j++]=stoi(tmp.substr(i,k-i));
            i=k++;
        }
        for(int i=0;i<p.size();i++){
            if(p[i]=='R'){
                cur=cur==tail?head:tail;
            }else {
                if(head==tail){
                    check=false;
                    cout<<"error\n";
                    break;
                }
                else
                    cur=cur==head?++head:--tail;
                n--;
            }
        }
        if(check){
            cout<<"[";
            if(n==0){
                
            }
            else if(cur==head){
                for(;head<tail-1;head++){
                    cout<<X[head]<<",";
                }
                cout<<X[tail-1];
            }else{
                for(tail=tail-1;tail>head;tail--){
                    cout<<X[tail]<<",";
                }
                cout<<X[head];
            }
            cout<<"]\n";
        }
        tmp.erase();
    }
}


