//
//  main.c
//  1_10_C
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n=0;
    double box[1001]={0};
    int i=0, j=0;
    double sum=0.0;
    double ave=0.0, dispersion=0.0;
    double dev[1001]={0};
    double dev_sum=0.0;
    double standard_deviation=0.0;
    
    while(1){
        for(i=0; i<n; i++){
            box[i] = 0;
            dev[i] = 0;
        }
        scanf("%d", &n);
        if(n==0){
            break;
        }
        for(i=0; i<n; i++){
            scanf("%lf", &box[i]);
            sum += box[i];
        }
        ave = sum/n;
        sum = 0.0;
        for(j=0; j<n; j++){
            dev[j] = box[j] - ave;
            dev[j] = dev[j]*dev[j];
            dev_sum += dev[j];
        }
        dispersion = dev_sum / n;
        dev_sum = 0;
        standard_deviation = sqrt(dispersion);
        printf("%.8lf\n", standard_deviation);
    }
    
    return 0;
}
