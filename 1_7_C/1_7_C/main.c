//
//  main.c
//  1_7_C
//
//  Created by x17091xx on 2019/05/10.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int r=0, c=0;
    int box[101][101];
    int n=0;
    int a=0, b=0;
    
    for(int i=0; i<101; i++){
        for(int j=0; j<101; j++){
            box[j][i] = 0;
        }
    }
    
    scanf("%d %d", &c, &r);
    
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            scanf("%d", &n);
            box[j][i] = n;
        }
    }
    
    for(a=0; a<c; a++){
        for(b=0; b<r; b++){
            printf("%d ", box[b][a]);
            box[r][a] += box[b][a];
            box[b][c] += box[b][a];
        }
        printf("%d", box[r][a]);
        box[r][c] += box[r][a];
        printf("\n");
    }
    
    for(a=0; a<r; a++){
        printf("%d ", box[a][c]);
    }
    
    printf("%d\n", box[r][c]);
    
    return 0;
}
