//
//  main.c
//  1_8_C
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1200]={0};
    int count[26];
    int i=0, j=0;
    
    for(i=0; i<26; i++){
        count[i] = 0;
    }
    
    while(scanf("%c", &str[i])!=EOF){
        if(str[i]>=65 && str[i]<=90){
            str[i] = str[i]+32;
        }
        for(j=0; j<26; j++){
            if(str[i]=='a'+j){
                count[j]++;
            }
        }
    }
    
    
    for(i=0; i<26; i++){
        printf("%c : %d\n", 'a'+i, count[i]);
    }
    
    return 0;
}
