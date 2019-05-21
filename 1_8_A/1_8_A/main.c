//
//  main.c
//  1_8_A
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1200]={0};
    int i=0;
    
    fgets(str, 1200, stdin);
    
    for(i=0; i<strlen(str); i++){
        if(str[i]>=97 && str[i]<=122){
            str[i] = str[i]-32;
        }else if(str[i]>=65 && str[i]<=90){
            str[i] = str[i]+32;
        }
    }
    
    printf("%s", str);
    
    return 0;
}
