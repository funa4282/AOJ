//
//  main.c
//  1_6_B
//
//  Created by x17091xx on 2019/05/08.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0;
    int card[4][14];
    char mark;
    int number=0;
    
    for(int i=0; i<4; i++){
        for(int j=0; j<14; j++){
            card[i][j]=0;
        }
    }
    
    scanf("%d", &n);
    
    for(int i=0; i<n*2; i++){
        scanf("%c %d", &mark, &number);
        if(mark=='S'){
            card[0][number-1]=1; //フラグを立てる
        }else if(mark=='H'){
            card[1][number-1]=1; //フラグを立てる
        }else if(mark=='C'){
            card[2][number-1]=1; //フラグを立てる
        }else if(mark=='D'){
            card[3][number-1]=1; //フラグを立てる
        }
    }
    
    for(int i=0; i<13; i++){
        if(card[0][i]==0){
            printf("S %d\n", i+1);
        }
    }
    for(int i=0; i<13; i++){
        if(card[1][i]==0){
            printf("H %d\n", i+1);
        }
    }
    for(int i=0; i<13; i++){
        if(card[2][i]==0){
            printf("C %d\n", i+1);
        }
    }
    for(int i=0; i<13; i++){
        if(card[3][i]==0){
            printf("D %d\n", i+1);
        }
    }
    
    return 0;
}
