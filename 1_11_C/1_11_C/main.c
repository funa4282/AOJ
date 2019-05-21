//
//  main.c
//  1_11_C
//
//  Created by x17091xx on 2019/05/17.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int i=0, j=0, k=0;
    int dice1[7]={0}, dice2[7]={0};
    
    //サイコロ入力
    for(i=1; i<7; i++){
        scanf("%d", &dice1[i]);
    }
    for(i=1; i<7; i++){
        scanf("%d", &dice2[i]);
    }
    
    for(i=0; i<6; i++){
        if(dice1[1]==dice2[1]){ //なぜ必要なのか要検討
            for(j=0; j<4; j++){ //これで一回転する　回転するたびに一致判定をする
                //一致判定
                for(k=1; k<7; k++){
                    if(dice1[k]!=dice2[k]){
                        break;
                    }else if(k==6){
                        printf("Yes\n");
                        return 0;
                    }
                }
                //回転
                dice2[0] = dice2[2];
                dice2[2] = dice2[3];
                dice2[3] = dice2[5];
                dice2[5] = dice2[4];
                dice2[4] = dice2[0];
            }
        }
        //回転
        dice2[0] = dice2[1];
        switch(i){
            case 2:
                dice2[1] = dice2[3];
                dice2[3] = dice2[6];
                dice2[6] = dice2[4];
                dice2[4] = dice2[0];
                break;
            default:
                dice2[1] = dice2[2];
                dice2[2] = dice2[6];
                dice2[6] = dice2[5];
                dice2[5] = dice2[0];
                break;
        }
    }
    
    printf("No\n");
    
    return 0;
}
