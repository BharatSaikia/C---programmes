#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    float a[3][4],b[3][4],c[3][4],x,y,z,p,q,r;
    for(i=0 ; i<3 ; i++)
        for(j=0 ; j<3 ; j++)
    {
        printf("\nEnter the coefficient a[%d][%d] = ",i,j);
        scanf("%f",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        printf("\nEnter the constant a[%d][3] = ",i);
        scanf("%f",&a[i][3]);
    }
    printf("\n The system is \n");
    for(i=0 ; i<3 ; i++)
        printf("\n\n%fx \t %fy \t %fz  %f  =  0 \n",a[i][0],a[i][1],a[i][2],a[i][3]);
    if(a[0][0]!=0)
    {
        p=a[1][0];
        q=a[0][0];
        r=a[2][0];
    }
    for(j=0;j<=3;j++)
    {
        b[0][j]=(-(p/q))*a[0][j];
        a[1][j]=a[1][j]+b[0][j];
        c[0][j]=(-(r/q))*a[0][j];
        a[2][j]=a[2][j]+c[0][j];
    }
    p=a[2][1];
    q=a[1][1];
    for(j=0;j<=3;j++)
    {
        b[1][j]=(-(p/q))*a[1][j];
        a[2][j]=a[2][j]+b[1][j];
    }

    printf("\n\n\nThe system becomes\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<=3;j++)
            printf("%f\t",a[i][j]);
        printf("\n");
    }
    z = a[2][3]/a[2][2];
    y=(a[1][3]-a[1][2]*z)/a[1][1];
    x=(a[0][3]-a[0][1]*y-a[0][2]*z)/a[0][0];
    printf("\n\n\n x = %f \n y = %f \n z = %f",x,y,z);

}
