#include<stdio.h>
#define period 10
#define principal 5000.00
int main()
{
    int year;
    float amount,value,inrate;
    amount=principal;
    inrate=0.11;
    year=0;
    while(year<=period)
    {
        printf("%d  %f\n",year,amount);
        value=amount+inrate*amount;
        year++;
        amount=value;
    }
}
