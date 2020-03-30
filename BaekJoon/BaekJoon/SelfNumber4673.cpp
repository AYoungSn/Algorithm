//
//  SelfNumber4673.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/30.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
using namespace std;
bool selfnum[10001];
void func(){
    for(int i=1;i<10001;i++){
        if(selfnum[i]==true)continue;
        int tmp=i;
        tmp+=tmp%10+tmp/10%10+tmp/100%10+tmp/1000%10+tmp/10000;
        while(tmp<10001){
            selfnum[tmp]=true;
            tmp+=tmp%10+tmp/10%10+tmp/100%10+tmp/1000%10+tmp/10000;
        }
    }
}
int main(){
    func();
    for(int i=1;i<10001;i++){
        if(selfnum[i]==false)
            cout<<i<<"\n";
    }
}
