//
//  main.c
//  1_4_A
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0;
    int d=0, r=0;
    double f=0;
    
    scanf("%d %d", &a, &b);
    
    d = a/b;
    r = a%b;
    f = (double)a/b;
    
    printf("%d %d %lf\n", d, r, f);
    
    return 0;
}
