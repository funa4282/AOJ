//
//  main.c
//  1_2_C
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0, c=0;
    int tmp=0;
    
    scanf("%d %d %d", &a, &b, &c);
    if(b<a){
        tmp = a;
        a = b;
        b = tmp;
    }
    if(c<b){
        tmp = b;
        b = c;
        c = tmp;
        if(b<a){
            tmp = a;
            a = b;
            b = tmp;
        }
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}
