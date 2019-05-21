//
//  main.c
//  1_11_A
//
//  Created by x17091xx on 2019/05/15.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void input(void);
void N(void);
void S(void);
void E(void);
void W(void);

int i=0;
int n[6]={0};
int tmp=0;

int main(int argc, const char * argv[]) {
    char str[101]={0};
    
    input();
    
    scanf("%s", str);
    
    for(i=0; i<strlen(str); i++){
        if(str[i] == 'N'){
            N();
        }else if(str[i] == 'S'){
            S();
        }else if(str[i] == 'E'){
            E();
        }else if(str[i] == 'W'){
            W();
        }
    }
    
    printf("%d\n", n[0]);
    
    return 0;
}

void input(){
    for(i=0; i<6; i++){
        scanf("%d", &n[i]);
    }
}

void N(){
    tmp = n[0];
    n[0] = n[1];
    n[1] = n[5];
    n[5] = n[4];
    n[4] = tmp;
}

void S(){
    tmp = n[0];
    n[0] = n[4];
    n[4] = n[5];
    n[5] = n[1];
    n[1] = tmp;
}

void E(){
    tmp = n[0];
    n[0] = n[3];
    n[3] = n[5];
    n[5] = n[2];
    n[2] = tmp;
}

void W(){
    tmp = n[0];
    n[0] = n[2];
    n[2] = n[5];
    n[5] = n[3];
    n[3] = tmp;
}
