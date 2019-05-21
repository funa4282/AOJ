//
//  main.c
//  1_10_D
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i=0, j=0, k=0, n=0;
    int x[101]={0}, y[101]={0};
    double p1=0.0, p2=0.0, p3=0.0, p0=0.0;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    
    for(j=0; j<n; j++){
        scanf("%d", &y[j]);
    }
    
    for(k=0; k<n; k++){
        p1 += abs(x[k]-y[k]);
        p2 += pow(fabs((double)x[k]-y[k]), 2.0);
        p3 += pow(fabs((double)x[k]-y[k]), 3.0);
        if(p0 < abs(x[k]-y[k])){ //最終的にmaxに
            p0 = abs(x[k]-y[k]);
        }
    }
    
    printf("%lf\n%lf\n%lf\n%lf\n", p1, pow(p2, 1.0/2), pow(p3, 1.0/3), p0);
    
    return 0;
}
