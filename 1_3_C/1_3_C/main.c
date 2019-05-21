//
//  main.c
//  1_3_C
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0;
    int tmp=0;
    
    while(1){
        scanf("%d %d", &a, &b);
        if(a==0 && b==0){
            break;
        }
        if(b<a){
            tmp = b;
            b = a;
            a = tmp;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}
