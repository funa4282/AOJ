//
//  main.c
//  1_1_C
//
//  Created by x17091xx on 2019/05/07.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cols=0, rows=0;
    int area=0, perimeter=0;
    
    scanf("%d %d", &cols, &rows);
    area = cols * rows;
    perimeter = (cols+rows)*2;
    printf("%d %d\n", area, perimeter);
    
    return 0;
}
