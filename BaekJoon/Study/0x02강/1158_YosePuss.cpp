//
//  1158_YosePuss.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/14.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;
// 큐
int main(){
    int N,K, arr[5001];
    cin>>N>>K;
    list<int> li;
    for(int i=0;i<N;i++)
        li.push_back(i+1);

    
    for(int i=0;i<N;i++){
        for(int k=1;k<K;k++){
            li.push_back(li.front());
            li.pop_front();
        }
        arr[i]=li.front();
        li.pop_front();
    }
    cout<<"<";
    for(int i=0;i<N-1;i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[N-1]<<">";
}
