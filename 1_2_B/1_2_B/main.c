//
//  main.c
//  1_2_B
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0, c=0;
    
    scanf("%d %d %d", &a, &b, &c);
    if(a<b && b<c){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
