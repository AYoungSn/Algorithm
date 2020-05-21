//
//  1021_CircleQueue.cpp
//  AlgorithmStudy
//
//  Created by 안영선 on 2020/05/21.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

int main(){
    int N, M,i, num,j,cnt=0;
    deque<int> arr;
    cin>>N>>M;
    for(i=1;i<=N;i++){
        arr.push_back(i);
    }
    for(i=0;i<M;i++){
        cin>>num;
        int index;
        for(j=0;j<arr.size();j++){
            if(arr[j]==num){
                index=j;
                break;
            }
        }
        if(index<arr.size()-index){
            while(arr.front()!=num){
                arr.push_back(arr.front());
                arr.pop_front();
                cnt++;
            }
            if(arr.front()==num){
                arr.pop_front();
            }
        }else{
            while(arr.front()!=num){
                arr.push_front(arr.back());
                arr.pop_back();
                cnt++;
            }
            if(arr.front()==num){
                arr.pop_front();
            }
        }
    }
    cout<<cnt;
}
