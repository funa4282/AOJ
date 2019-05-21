//
//  main.c
//  1_2_A
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0;
    
    scanf("%d %d", &a, &b);
    
    if(a==b){
        printf("a == b\n");
    }else if(a<b){
        printf("a < b\n");
    }else{
        printf("a > b\n");
    }
    return 0;
}
