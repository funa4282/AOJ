//
//  main.c
//  1_5_C
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
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w; j++){
                if(i%2!=0){
                    if(j%2!=0){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }else{
                    if(j%2!=0){
                        printf(".");
                    }else{
                        printf("#");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
