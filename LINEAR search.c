#include<stdio.h>
void main()
{
    int a[10],x,n,i=0,j=0;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Enter element to be found\n");
        scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d found at %d\n",x,i+1);
            j++;
        }
    }

    printf("%d found %d times\n",x,j);
}
