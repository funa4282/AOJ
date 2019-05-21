//
//  main.c
//  1_7_D
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0, m=0, l=0, a=0, b=0, c=0;
    long long matrix1[101][101], matrix2[101][101], matrix3[101][101];
    int i=0, j=0;
    
    scanf("%d %d %d", &n, &m, &l);
    
    for(i=0; i<101; i++){
        for(j=0; j<101; j++){
            matrix1[i][j]=0;
            matrix2[i][j]=0;
            matrix3[i][j]=0;
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%lld", &matrix1[i][j]);
        }
    }
    
    for(i=0; i<m; i++){
        for(j=0; j<l; j++){
            scanf("%lld", &matrix2[i][j]);
        }
    }
    
    for(b=0; b<m; b++){
        for(a=0; a<n; a++){
            for(c=0; c<l; c++){
                matrix3[a][c] += matrix1[a][b] * matrix2[b][c];
            }
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<l; j++){
            if(j>=l-1){
                printf("%lld", matrix3[i][j]);
            }else{
                printf("%lld ", matrix3[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
