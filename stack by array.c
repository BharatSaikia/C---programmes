#include<stdio.h>
#define MAXSIZE 10
void push();
void pop();
void display();
int top = -1;
int data[MAXSIZE];
int i;
int main()

{
    int ch;
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n\n");
        printf("\n Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : push();break;
            case 2 : pop();break;
            case 3 : display();break;
            case 4 : return 0;
            default : printf("\nInvalid choice");
        }
    }
    return 0;
}
void push()
{
    int item;
    if(top<MAXSIZE-1)
    {
        printf("\nEnter data");
        scanf("%d",&item);
        top++;
        data[top]=item;
    }
    else
    {
        printf("\nStack is Overflow");
    }
}
void pop()
{
    int item;
    if(top>-1)
    {
        item=data[top];
        top--;
    }
    else
    {
        printf("\n Stack is empty");
    }
}
void display()

{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack is :");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",data[i]);
        }
    }
}
