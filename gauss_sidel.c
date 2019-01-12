#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define X3(x1,x2)((-3+2*(x1)-(x2))/7)
#define X1(x2,x3)((-1+2*(x2)-3*(x3))/5)
#define X2(x1,x3)((2+3*(x1)-(x3))/9)

void main()
{
    double allowed_error,x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;
    int count=0;
    printf("Enter Allowed Error : \t");
    scanf("%lf",&allowed_error);
    printf("\nx1\t\tx2\t\tx3");
    printf("\n%f\t%f\t%f",x1,x2,x3);
    do
    {
        y1=X1(x2,x3);
        y2=X2(y1,x3);
        y3=X3(y1,y2);
        if(fabs(y1-x1) < allowed_error && fabs(y2-x2)< allowed_error && fabs(y3-x3) < allowed_error)
        {
            printf("\n\nx1 = %.lf",y1);
            printf("\nx2 = %.2lf",y2);
            printf("\nx3 = %.2lf",y3);
            count=1;
        }
        else
        {
            x1=y1;
            x2=y2;
            x3=y3;
            printf("\n%f\t%f\t%f",x1,x2,x3);
        }
    }while(count!=1);
}
