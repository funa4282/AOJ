//
//  main.c
//  1_9_A
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char w[11], t[1001];
    int i=0, c=0;
    
    scanf("%s", w);
    
    //入力した文字の大文字を小文字に
    for(i=0; w[i]!='\0'; i++){
        w[i] = tolower(w[i]);
    }
    
    //文字列を読み終わるまで無限ループ
    while(1){
        scanf("%s", t); //文字を読み込んでいく
        if(strcmp(t, "END_OF_TEXT")==0){ //END_OF_TEXTだったらbreak
            break;
        }
        for(i=0; t[i]!='\0'; i++){ //大文字を小文字に
            t[i] = tolower(t[i]);
        }
        if(strcmp(t, w)==0){ //入力した文字と同じだったらカウント
            c++;
        }
    }
    
    printf("%d\n", c);
    
    return 0;
}
