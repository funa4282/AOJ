//
//  main.c
//  1_5_B
//
//  Created by x17091xx on 2019/05/08.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int h=0, w=0;
    
    while(1){
        scanf("%d %d", &h, &w);
        if(h==0 && w==0){
            break;
        }
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(i==0 || i==h-1){
                    printf("#");
                }else if(j==0 || j==w-1){
                    printf("#");
                }else{
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
