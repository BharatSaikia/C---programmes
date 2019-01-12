#include<stdio.h>
void main()
{
    int n,i,a[10],pos;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position of deletion\n");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
       a[i]=a[i+1];
    }

    printf("Resultant array is\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
}
