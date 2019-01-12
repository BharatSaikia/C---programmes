#include<stdio.h>
#include<stdlib.h>
#define size 5
void insertq(int);
void deleteq();
void display();
int front=-1,rear=-1, cQ[size];
int main()
{
    int v,ch;
    while(1)
    {
        printf("\nCircular queue : \n");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter Choice : \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter value to insert : ");
            scanf("%d",&v);
            insertq(v);break;
            case 2: deleteq();break;
            case 3: display();break;
            case 4: exit(0);
            default : printf("\nSelect correct option\n");
        }
    }
   }
void insertq(int v)
{
    if((front==0&&rear==size-1)||(front== rear+1))
    printf("\nQ is Full\n");
    else
    {
        if(rear==size-1&&front!=0)
             rear=-1;
        cQ[++rear]=v;
        printf("\nInsertion done\n");
        if(front==-1)
            front=0;
    }
}
void display(int queue[])
{
    if(front==-1)
        printf("Q Empty\n");
    else
    {
        int i=front;
        printf("\n Elements are : \n");
        if(front<=rear)
        {
            while(i<=rear)
                printf("%d\t",cQ[i++]);
    }
    else
    {
            while(i<=size-1)
               printf("%d\t",cQ[i++]);
            i=0;
            while(i<=rear)
                printf("%d\t",cQ[i++]);
    }
}
}
void deleteq()
{
if(front==-1&&rear==-1)
    {
        printf("Q empty");
    }
    else
    {
        printf("\n%d deleted\n",cQ[front++]);
        if(front==size)
        front=0;
        if(front-1==rear)
            front=rear=-1;
    }
}
