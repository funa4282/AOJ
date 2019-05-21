//
//  main.c
//  1_5_D
//
//  Created by x17091xx on 2019/05/08.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0, x=0;
    
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        x = i;
        if(i%3==0){
            printf(" %d", i);
        }else{
            if(i%10==3){
                printf(" %d", i);
            }else{
                while(x>0){
                    x/=10;
                    if(x%10==3){
                        printf(" %d", i);
                        break;
                    }
                    if(x==3){
                        printf(" %d", i);
                        break;
                    }
                }
            }
        }
    }
    printf("\n");
    
    return 0;
}
