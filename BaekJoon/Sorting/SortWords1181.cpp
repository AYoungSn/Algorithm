//
//  SortWords1181.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/08.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int compare(string s1, string s2){
    if(s1.length()==s2.length())
        return s1<s2;
    return s1.length()<s2.length();
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    int N,i=0;
    string S[20000];
    cin >> N;
    
    for(;i<N;i++){
        cin>>S[i];
    }
    
    sort(S,S+N,compare);
    string pre=S[0];
    cout<<S[0]<<"\n";
    for(i=1;i<N;i++){
        if(S[i]==pre)
            continue;
        pre=S[i];
        cout<<S[i]<<"\n";
    }
    return 0;
}
