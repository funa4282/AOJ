//
//  main.c
//  1_1_D
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x=0;
    int h=0, m=0, s=0;
    int tmp=0;
    
    scanf("%d", &x);
    
    h = x / 3600;
    tmp = x % 3600;
    m = tmp / 60;
    s = tmp % 60;
    
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}
