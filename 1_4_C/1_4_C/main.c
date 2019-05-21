//
//  main.c
//  1_4_C
//
//  Created by x17091xx on 2019/05/08.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0;
    char op;
    int answer=0;
    
    while(1){
        scanf("%d %c %d", &a, &op, &b);
        if(op=='?'){
            break;
        }else if(op=='+'){
            answer = a+b;
        }else if(op=='-'){
            answer = a-b;
        }else if(op=='*'){
            answer = a*b;
        }else if(op=='/'){
            answer = a/b;
        }
        printf("%d\n", answer);
    }
    return 0;
}
