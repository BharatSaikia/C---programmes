#include<Stdio.h>
void main()
{
int n,a=3,i,j;
printf("Enter size\n");
scanf("%d",&n);
if(n>=1)
{
printf ("1st %d prime nos are\n",n);
printf("2\n");
}
for(i=2;i<=n; )
{
    for(j=2;j<=a-1;j++)
    {
        if(a%j==0)
        break;
    }
    if(j==a)

{
    printf("%d\n",a);
    i++;
}
    a++;
}
}
