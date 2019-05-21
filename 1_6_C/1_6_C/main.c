//
//  main.c
//  1_6_C
//
//  Created by x17091xx on 2019/05/09.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0;
    int b=0, f=0, r=0, v=0;
    int school[4][3][10];
    
    for(int k=0; k<4; k++){
        for(int i=0; i<3; i++){
            for(int j=0; j<10; j++){
                school[k][i][j] = 0;
            }
        }
    }
    
    scanf("%d", &n);
    
    for(int l=0; l<n; l++){
        scanf("%d %d %d %d", &b, &f, &r, &v);
        school[b-1][f-1][r-1] += v;
    }
    
    for(int k=0; k<4; k++){
        for(int i=0; i<3; i++){
            for(int j=0; j<10; j++){
                if(school[k][i][j]!=0){
                    printf(" %d", school[k][i][j]);
                }else{
                    printf(" 0");
                }
            }
            printf("\n");
        }
        if(k==3){
            break;
        }
        printf("####################\n");
    }
    
    return 0;
}
