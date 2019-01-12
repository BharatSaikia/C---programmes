#include<stdio.h>
int main()
{
    int i,beg,end,n,mid,x,a[100];
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the element to search\t");
    scanf("%d",&x);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg <= end)
    {
        if(a[mid] == x)
        {
            printf("\n%d found at %d",x,mid+1);
            break;
        }
        else if(a[mid]<x)
                beg = mid + 1;
                else
                    end = mid - 1;
    }
}
