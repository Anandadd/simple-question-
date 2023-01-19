#include<stdio.h>
main()
{
    int x,y,t;
    printf("enter two no.");
    scanf("%d%d",&x,&y);
    printf("x is %d \ny is %d\n",x,y);
    t=x;
    x=y;
    y=t;
    printf("\n after interchange \n");
    printf("x is %d\ny is %d",x,y);
}
