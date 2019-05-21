//
//  main.c
//  1_11_B
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
    int q=0;
    int i=0;
    int t=0, f=0;
    
    input();
    
    scanf("%d", &q);
    
    for(i=0; i<q; i++){
        scanf("%d %d", &t, &f);
        if(t==n[0]){
            if(f==n[1]){
                printf("%d\n", n[2]);
            }
            if(f==n[2]){
                printf("%d\n", n[4]);
            }
            if(f==n[3]){
                printf("%d\n", n[1]);
            }
            if(f==n[4]){
                printf("%d\n", n[3]);
            }
        }
        if(t==n[1]){
            if(f==n[0]){
                printf("%d\n", n[3]);
            }
            if(f==n[2]){
                printf("%d\n", n[0]);
            }
            if(f==n[3]){
                printf("%d\n", n[5]);
            }
            if(f==n[5]){
                printf("%d\n", n[2]);
            }
        }
        if(t==n[2]){
            if(f==n[0]){
                printf("%d\n", n[1]);
            }
            if(f==n[1]){
                printf("%d\n", n[5]);
            }
            if(f==n[4]){
                printf("%d\n", n[0]);
            }
            if(f==n[5]){
                printf("%d\n", n[4]);
            }
        }
        if(t==n[3]){
            if(f==n[0]){
                printf("%d\n", n[4]);
            }
            if(f==n[1]){
                printf("%d\n", n[0]);
            }
            if(f==n[4]){
                printf("%d\n", n[5]);
            }
            if(f==n[5]){
                printf("%d\n", n[1]);
            }
        }
        if(t==n[4]){
            if(f==n[0]){
                printf("%d\n", n[2]);
            }
            if(f==n[2]){
                printf("%d\n", n[5]);
            }
            if(f==n[3]){
                printf("%d\n", n[0]);
            }
            if(f==n[5]){
                printf("%d\n", n[3]);
            }
        }
        if(t==n[5]){
            if(f==n[1]){
                printf("%d\n", n[3]);
            }
            if(f==n[2]){
                printf("%d\n", n[1]);
            }
            if(f==n[3]){
                printf("%d\n", n[4]);
            }
            if(f==n[4]){
                printf("%d\n", n[2]);
            }
        }
    }
    
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
