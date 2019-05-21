//
//  main.c
//  1_8_D
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[101]={0}, word[101]={0};
    int s=0, w=0;
    int i=0, j=0;
    int flag=1;
    
    scanf("%s %s", str, word);
    
    s = (int)strlen(str);
    w = (int)strlen(word);
    
    for(i=0; i<s; i++){ //スタートを見つける
        flag = 1;
        for(j=0; j<w; j++){ //word[0]から見ていく
            if(str[(i+j)%s] != word[j]){ //違ったらフラグ折ってiでまたスタート探し
                flag = 0;
            }else{
                printf("i:%d, j:%d, %d\n", i, j, (i+j)%s); //文字列を見終わったら最初から比べるために(i+j)%s
            }
        }
        if(flag){
            break;
        }
    }
    
    if(flag){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}
