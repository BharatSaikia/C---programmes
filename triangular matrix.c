#include<stdio.h>
#include<math.h>
void main()
{
    int i,j;
    float a[3][4],b[3][4],c[3][4],x,y,z,p,q,r;
    printf("Enter the co efficients");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%f",&a[i][j]);
        }
    }
     printf("Enter the constants");
     for(i=0;i<3;i++)
        scanf("%f",&a[i][3]);
     if(a[0][0]!=0)
     {
         p=a[1][0];
         q=a[0][0];
         r=a[2][0];
     }
     for(j=0;j<3;j++)
     {
         b[0][j]=(-(p/q))*a[0][j];
         a[1][j]=a[1][j]+b[0][j];
         c[0][j]=(-(r/q))*a[0][j];
         a[2][j]=a[2][j]+c[0][j];
     }
     p=a[2][1];
     q=a[1][1];
     for(j=0;j<3;j++)
     {
         b[1][j]=(-(p/q))*a[1][j];
         a[2][j]=a[2][j]+b[1][j];
     }
     printf("\n\n The Matrix becomes \n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
            printf("%f\t",a[i][j]);
        printf("\n");
     }
     z=a[2][3]/a[2][2];
     y=(a[1][3]-a[1][2]*z)/a[1][1];
     x=(a[0][3]-a[0][2]*z-a[0][1]*y);
     printf("\n The soln is");
     printf("\n x=%f,y=%f,z=%f",x,y,z);

}
