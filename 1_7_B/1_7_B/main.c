//
//  main.c
//  1_7_B
//
//  Created by x17091xx on 2019/05/10.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0, x=0;
    int count=0;
    
    while(1){
        scanf("%d %d", &n, &x);
        if(n==0 && x==0){
            break;
        }
        for(int i=1; i<=n; i++){
            for(int j=1+i; j<=n; j++){
                for(int k=1+j; k<=n; k++){
                    if(i+j+k==x){
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    
    return 0;
}
