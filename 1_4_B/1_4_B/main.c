//
//  main.c
//  1_4_B
//
//  Created by x17091xx on 2019/05/08.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double r=0.0;
    double area=0.0, perimeter=0.0;
    
    scanf("%lf", &r);
    
    area = r*r*M_PI;
    perimeter = 2*M_PI*r;
    
    printf("%lf %lf\n", area, perimeter);
    
    return 0;
}
