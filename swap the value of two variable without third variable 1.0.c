#include<stdio.h>
main()
{
    int x,y;
    printf("enter two no.");
    scanf("%d%d",&x,&y);
    printf("x is %d \ny is %d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\n after interchange \n");
    printf("x is %d\ny is %d",x,y);
}

