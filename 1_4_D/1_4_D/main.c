//
//  main.c
//  1_4_D
//
//  Created by x17091xx on 2019/05/08.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0;
    int tmp=0;
    int min=1000000, max=-1000000;
    long long int sum=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &tmp);
        if(tmp<min){
            min = tmp;
        }
        if(tmp>max){
            max = tmp;
        }
        sum += tmp;
    }
    
    printf("%d %d %lld\n", min, max, sum);
    
    return 0;
}
