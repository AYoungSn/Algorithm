//
//  2504_parenthesis.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/26.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    string str;
    cin>>str;
    int tmp=1,t=0;
    bool check=true;
    stack<int> val;
    
    if(str.size()==1){
        check=false;
    }
    for(int i=0;i<str.size()&&check;i++){
        tmp=1;
        // () 가 붙어있으면 push 2
        if(str[i]=='('&&str[i+1]==')'){
            val.push(2);
            i++;
        }else if(str[i]=='['&&str[i+1]==']'){
            val.push(3);
            i++;
        }else if(str[i]=='('){
            // 여는 괄호면 stack 에 push
            val.push(-1);
        }else if(str[i]=='['){
            val.push(-2);
        }else if(str[i]==')'){
            if(i==0||val.empty()){
                check=false;
                break;
            }
            // stack top 에 숫자가 들어있으면 덧셈
            tmp=0;
            while(!val.empty()&&(t=val.top())!=-1){
                if(t==-2){
                    check=false;
                    break;
                }
                val.pop();
                tmp+=t;
            }
            if(val.empty()){
                check=false;
                break;
            }
            val.pop();
            val.push(tmp*2);
        }else if(str[i]==']'){
            if(i==0||val.empty()){
                check=false;
                break;
            }
            tmp=0;
            while(!val.empty()&&(t=val.top())!=-2){
                val.pop();
                if(t==-1){
                    check=false;
                    break;
                }
                tmp+=t;
            }
            if(val.empty()){
                check=false;
                break;
            }
            val.pop();
            val.push(tmp*3);
        }
    }
    
    int result=0;
    while(!val.empty()&&check){
        if(val.top()<0){
            check=false;
            break;
        }
        result+=val.top();
        val.pop();
    }
    if(!check){
        cout<<"0";
        return 0;
    }else{
        cout<<result<<"\n";
    }
}


