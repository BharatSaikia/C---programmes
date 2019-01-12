#include<stdio.h>
#include<math.h>
int cosine(float x,int a);
int main()
{
    int a;
    float x,k;
    k=cosine(x,a);
    printf("Angle\t\tCos(Angle)\n\n");
    printf("%d\t\t%f",a,k);

}
int cosine(float m,int b)
{
    float z;
    for(b=0;b<=180;b+=10)
    {
        m=(3.1416/180)*b;
        z=cos(m);
        return b,z;

    }
}
