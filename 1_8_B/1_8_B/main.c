//
//  main.c
//  1_8_B
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1000]={0};
    int i=0;
    int sum=0;
    
    while(1){
        scanf("%s", str);
        if(strlen(str)==1 && str[0]=='0'){
            break;
        }
        for(i=0; i<strlen(str); i++){
//            str[i] = str[i]-'0'; これがあると出来なかった
            sum += str[i]-'0';
        }
        printf("%d\n", sum);
        sum = 0;
    }
    
    return 0;
}
