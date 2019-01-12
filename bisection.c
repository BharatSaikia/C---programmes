#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fun(float);
void main()
{
    float x0,x1,x,p,q,s;
    int d=1;
    l:
        printf("Enter the 1st value of x0\n\n");
        scanf("%f",&x0);
        printf("Enter 2nd value of x1\n\n");
        scanf("%f",&x1);
        if((fun(x0)<0)&&(fun(x1)>0))
        {
            printf("\nRoots lies b/w x0&x1\n");
            printf("\nn\t\ta\t\tb\t\tx\t\tf(x)\n");
            b:
            x=(x0+x1)/2;
            p=fun(x0);
            q=fun(x1);
            s=fun(x);
            printf("\n%d\t%f\t%f\t%f\t%f\n",d,x0,x1,x,s);
            if(s>0)
                x1=x;
            else
                x0=x;
            d++;
            if(fabs(x1-x0)<=0.0001)
            {
                printf("\nThe root of eqn\n%f",x);
                exit(0);
            }
            else
                goto b;
        }
        else
        {
            printf("\nWrong value\n\n");
            goto l;
        }
}
float fun(float m)
{
    float f;
    f=m*exp(m)-1;
    return(f);
}
