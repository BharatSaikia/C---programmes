#include<stdio.h>
void main()
{
 int sum=0,a[10][10],b[10][10],m[10][10],i,j,k,r,c,p,q;
 printf("Enter row & column of 1st\n");
 scanf("%d%d",&r,&c);
 printf("Enter elements");
 for(i=0;i<r;i++)
 for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);

printf("Enter row & column of 2nd\n");
scanf("%d%d",&p,&q);
printf("Enter elements");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);



for(i=0;i<r;i++)
{
    for(j=0;j<q;j++)
    {
        for(k=0;k<p;k++)
        {
            sum = sum+a[i][k]*b[k][j];
        }
        m[i][j] = sum;
        sum=0;
    }
}
printf("product of matrices ; \n");
for(i=0;i<r;i++)
{


    for(j=0;j<q;j++)
    printf("%d\t",m[i][j]);
printf("\n");
}
}
