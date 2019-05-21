//
//  main.c
//  1_10_B
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0, C=0;
    double S=0, L=0, h=0;
    double s=0.0, c=0.0;
    
    scanf("%d %d %d", &a, &b, &C);
    
    s = sin(C*M_PI/180);
    c = cos(C*M_PI/180);
    
    S = 0.5*a*b*s;
    L = a+b+sqrt((a*a)+(b*b)-2*a*b*c);
    h = b*s;
    
    printf("%f\n", S);
    printf("%f\n", L);
    printf("%f\n", h);
    
    return 0;
}
