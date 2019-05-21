//
//  main.c
//  1_9_D
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1001]={0};
    int n=0;
    int i=0, j=0, k=0, l=0;
    char command[10]={0};
    int a=0, b=0;
    char rep[]="replace";
    char rev[]="reverse";
    char prt[]="print";
    char word[1001]={0};
    char tmp[1001]={0};
    
    scanf("%s", str);
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
    
        scanf("%s %d %d", command, &a, &b);
    
        if(strcmp(command, rep)==0){
            scanf("%s", word);
            for(j=0; j<b-a+1; j++){
                str[j+a] = word[j];
            }
        }
        
        if(strcmp(command, rev)==0){
            for(l=a; l<=b; l++){
                tmp[b-l] = str[l];
            }
            for(l=a; l<=b; l++){
                str[l] = tmp[l-a];
            }
        }
    
        if(strcmp(command, prt)==0){
            for(k=a; k<=b; k++){
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
