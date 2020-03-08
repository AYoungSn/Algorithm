//
//  SortAge10814.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/08.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

class Member{
public:
    int age,num;
    string name;
    bool operator<(Member &member){
        if(this->age == member.age)
            return this->num < member.num;
        return this->age < member.age;
    }
};
bool compare(Member m1, Member m2){
    return m1<m2;
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);cout.tie(NULL);
    
    int N,i=0;
    cin>>N;
    
    Member member[100000];
    for(;i<N;i++){
        cin>>member[i].age>>member[i].name;
        member[i].num=i;
    }
    
    sort(member,member+N,compare);
    for(i=0;i<N;i++)
        cout<<member[i].age<<" "<<member[i].name<<"\n";

    return 0;
}
