//
//  Teret1002.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/06.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin>> T;
    
    int x1,y1,r1,x2,y2,r2;
    int d;
    for(int i=0;i<T;i++){
        cin>> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        d=pow(x1-x2,2)+pow(y1-y2,2);
        if(d==0){//두원의 중심이 같을 때
            if(r1==r2)//두 원이 일치할 때
                printf("-1\n");
            else//두 원이 중심은 같고 크기는 다른 경우
                printf("0\n");
        }else if(pow(r1-r2,2)>d){//원 안에 다른 원이 내접하지 않는 경우
            printf("0\n");
        }else if(pow(r1-r2,2)==d){//내접
            printf("1\n");
        }else if(d<pow(r1+r2,2)){//교차
            printf("2\n");
        }else if(d==pow(r1+r2,2)){//외접
            printf("1\n");
        }else//만나지 않는 경우
            printf("0\n");
    }
    return 0;
}
