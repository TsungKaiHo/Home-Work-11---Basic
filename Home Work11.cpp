//
//  main.cpp
//  Home Work 11
//
//  Created by Ho Tsung Kai on 2019/3/27.
//  Copyright © 2019 Ho Tsung Kai. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int a,b,c;
    printf("請輸入三個整數數字:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
        if(a>c)
            if(b>c)
                printf("三數由小到大=%d,%d,%d\n",c,b,a);
            else
                printf("三數由小到大=%d,%d,%d\n",b,c,a);
            else
                printf("三數由小到大=%d,%d,%d\n",b,a,c);
            else
                if (b>c)
                    if (a>c)
                        printf("三數由小到大=%d,%d,%d\n",c,a,b);
                    else
                        printf("三數由小到大=%d,%d,%d\n",a,c,b);
                    else
                        printf("三數由小到大=%d,%d,%d\n",a,b,c);
    return 0;
}
