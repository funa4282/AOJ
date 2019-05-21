//
//  main.c
//  1_9_C
//
//  Created by x17091xx on 2019/05/11.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int p1=0, p2=0;
    int loop=0;
    int i=0, j=0;
    char s1[101]={0}, s2[101]={0};
    int max=0;
    int flag=0;
    
    scanf("%d", &loop);
    
    for(j=0; j<loop; j++){
        scanf("%s %s", s1, s2);
        if(strlen(s1)>strlen(s2)){
            max = (int)strlen(s1);
        }else if(strlen(s1)<strlen(s2)){
            max = (int)strlen(s2);
        }else{
            max = (int)strlen(s1);
        }
        for(i=0; i<max; i++){
            if((int)s1[i]==(int)s2[i]){
                flag = 1;
            }else if((int)s1[i]<(int)s2[i]){
                p2 += 3;
                flag = 0;
            }else{
                p1 += 3;
                flag = 0;
            }
            if(flag==0){
                break;
            }
        }
        if(flag==1){
            p1 += 1;
            p2 += 1;
        }
    }
    
    printf("%d %d\n", p1, p2);
    
    return 0;
}
