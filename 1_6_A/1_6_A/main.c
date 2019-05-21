//
//  main.c
//  1_6_A
//
//  Created by x17091xx on 2019/05/08.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0;
    int box[101];
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        if(i==n-1){
            scanf("%d", &box[i]);
            break;
        }
        scanf("%d ", &box[i]);
    }
    
    for(int i=n-1; i>=0; i--){
        if(i==0){
            printf("%d\n", box[i]);
            break;
        }
        printf("%d ", box[i]);
    }
    
    
    return 0;
}
