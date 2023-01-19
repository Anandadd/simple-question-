#include<stdio.h>
main()
{
    int x=10,y=15,z=12,m=-15;
    printf("%d\t%d\t%d\n",x<y&&y>z,x<y&&y<z,x>y&&y>z);
    printf("%d\t%d\t%d\n",x>y||y<z,x<y||y<z,x<y||y>z);
    printf("%d\t%d\t%d\t%d\n",!0,!1,!x,!m);
}
