//
//  QuadrantSelection14681.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d", &y);
    
    if(x>0){
        if(y>0)
            printf("1");
        else
            printf("4");
    }else{
        if(y>0)
            printf("2");
        else
            printf("3");
    }
}
