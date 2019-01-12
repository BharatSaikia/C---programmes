#include<stdio.h>
int add(int a,int b);
int main()
{
 int a,b,c;
 scanf("%d%d",a,b);
 printf("Result = %d",c);
 c=add(a,b);
}
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
