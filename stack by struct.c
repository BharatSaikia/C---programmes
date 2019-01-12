#include<stdio.h>
#define MAX 5
struct stack
{
    int a[MAX],top;
} st;
int i;
void push()
{
    int n;
    if(st.top==MAX)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter a number\n");
        scanf("%d",&n);
        st.top++;
        st.a[st.top]=n;
    }
}
void pop()
{
    st.top--;
}
void display()
{
    printf("The stack is : \n");
    for( i=1;i<=st.top;i++)
        printf("%d\t",st.a[i]);
}
void main()
{
    int sw=1,ch;
    while(sw==1)
    {
        printf("Enter your choice \n");
        printf("1.Push\n2.Pop\n3.Display\n\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : push();break;
             case 2 : pop();break;
             case 3 : display();break;
              default : printf("Wrong Choice\n");
        }
        printf("Print 1 to continue\n");
        scanf("%d",&sw);
    }
}
