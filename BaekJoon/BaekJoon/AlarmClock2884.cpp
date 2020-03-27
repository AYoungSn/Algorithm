//
//  AlarmClock2884.cpp
//  BaekJoon
//
//  Created by 안영선 on 2020/03/27.
//  Copyright © 2020 Ahn YoungSeon. All rights reserved.
//

#include <stdio.h>

int main(){
    int h,m;
    scanf("%d %d",&h,&m);
    if(m<45){
        if(h==0){
            h=24;
        }
        printf("%d %d", h-1,m+15);
    }else{
        printf("%d %d", h, m-45);
    }
}
