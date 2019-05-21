//
//  main.c
//  1_6_D
//
//  Created by x17091xx on 2019/05/09.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0, m=0;
    int i=0, j=0, k=0;
    int l=0, r=0;
    int a[101][101]={0}, b[101]={0}, c[101]={0};
    
    scanf("%d %d", &n, &m);
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(k=0; k<m; k++){
        scanf("%d", &b[k]);
    }
    
    for(l=0; l<n; l++){
        for(r=0; r<m; r++){
            c[l] += a[l][r] * b[r];
        }
        printf("%d\n", c[l]);
    }
    
    return 0;
}
