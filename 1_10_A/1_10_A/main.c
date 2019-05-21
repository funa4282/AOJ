//
//  main.c
//  1_10_A
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double distance=0.0;
    double x1=0, y1=0, x2=0, y2=0;
    
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    distance = pow((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1), 0.5);
    
    printf("%f\n", distance);
    
    return 0;
}
