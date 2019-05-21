//
//  main.c
//  1_3_D
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0, c=0;
    int count=0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    for(int i=a; i<=b; i++){
        if(c%i==0){
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
