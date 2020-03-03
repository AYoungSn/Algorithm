//
//  main.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/02.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int cnt=0;
    for(int i=0;i<S.length();i++){
        cnt++;
        if(S[i]=='c'){
            if(S[i+1]=='='||S[i+1]=='-')
                i++;
        }else if(S[i]=='d'){
            if(S[i+1]=='-')
                i++;
            else if(S[i+1]=='z'&&S[i+2]=='=')
                i+=2;
        }else if((S[i]=='l'&&S[i+1]=='j') || (S[i]=='n'&&S[i+1]=='j') || (S[i]=='s'&&S[i+1]=='=')||(S[i]=='z'&&S[i+1]=='=')){
            i++;
        }
    }
    
    cout<<cnt;
    return 0;
}
