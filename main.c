//
//  main.c
//  numberpaixu
//
//  Created by 20161104575 on 17/6/7.
//  Copyright © 2017年 20161104575. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[10];
    int i,j,n;
    
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (j = 0; j < 9; j++)
    {
        for (i = 0; i < 9-j; i++)
        {
            if(a[i] > a[i + 1])
            {
                n = a[i];
                a[i] = a[i+1];
                a[i+1] = n;
            }
        }
    }
    for(i = 0; i < 10; i++)
    {
        if(i==9)
        {
            printf("%d\n",a[i]);
        }
        else
        {
            printf("%d,",a[i]);
        }
    }
    
    return 0;
}
