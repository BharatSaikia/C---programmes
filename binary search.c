#include<stdio.h>
int main()
{
    int i,b,e,n,m,k,a[100];
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search");
    scanf("%d",&m);
    b=0;
    e=n-1;
    m=(b+e)/2;
    while(b<=e)
    {
        if(a[m]<k)
        {
            b=m+1;
        }
        else if(a[m]==k)
        {
            printf("%d is present at location %d\n",k,m+1);
            break;
        }
        else
        {
            e=m-1;

        }
m=(b+e)/2;
    }
    if(b>e)
    {
        printf("Not found");
    }
    return 0;

}
