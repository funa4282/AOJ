//
//  main.c
//  1_9_B
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1000]={0};
    int m=0, h=0;
    int i=0, j=0, k=0, l=0;
    int len=0;
    
    while(1){
        scanf("%s", str);
        if(str[0]=='-'){
            break;
        }
        scanf("%d", &m);
    
        len = (int)strlen(str);
    
        for(i=0; i<m; i++){
            scanf("%d", &h);
            for(j=0; j<h; j++){
                str[len+j] = str[j];
            }
            for(k=0; k<len; k++){
                str[k] = str[k+h];
            }
            for(l=0; l<len; l++){
                str[len+l] = 0;
            }
        }
        printf("%s\n", str);
    }
    
    return 0;
}
