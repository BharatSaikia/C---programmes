#include<stdio.h>
#include<math.h>
void main()
{
    int q,n,s=0,k,r;
    scanf("%d",&n);
    q=n;
   for(k=0;q>0;k++)
    {
        r=q%10;
        s=s+r*pow(2,k);
        q=q/10;

    }
    printf("%d",s);
}
