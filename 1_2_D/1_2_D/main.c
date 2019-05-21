//
//  main.c
//  1_2_D
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int w=0, h=0, x=0, y=0, r=0;
    
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
    
    if(x-r>=0 && x+r<=w){
        if(y-r>=0 && y+r<=h){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        printf("No\n");
    }
    return 0;
}
