//
//  main.c
//  1_3_B
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int i=0;
    
    while(1){
        i++;
        scanf("%d", &n);
        if(n==0){
            break;
        }
        printf("Case %d: %d\n", i, n);
    }
    return 0;
}
