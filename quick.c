#include<stdio.h>
#include<stdlib.h>
int partition(int a[100], int f, int l)
{
    int i,p,j,temp;
    p = a[l];
    j = f;
    for(i=f; i< l ;i++)
    {
        if(a[i] <= p)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
     temp  =  a[j];
     a[j] = a[l];
     a[l]  =  temp;
     return j;
}
void quicksort(int a[100], int f, int l)
{
    int j,i;
    if(i<l)
    {
        j = partition(a,f,l);
        quicksort(a,f,j-1);
        quicksort(a,j+1,l);
    }
}
void main()
{
    int a[100],i,n,f,l;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("\nEnter elements \t");
    for(i=0;i<n;i++)
        scanf("%d",a[i]);

    quicksort(a,0,n-1);
    printf("Sorted list is : ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
