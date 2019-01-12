#include<stdio.h>
#define N 6
int queue[N]={0};
int rear=0,front=0;
void insert(void);
void del(void);
void display(void);
void main()
{
    int user=0;
    while(user!=4)
    {
        printf("\n\t The Size of Queue is %d \n",N);
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        scanf("%d",&user);
        switch(user)
        {
            case 1 : insert();break;
            case 2 : del();break;
            case 3 : display();break;
            case 4 : break;
        }
    }
}

/********insert*******/

void insert(void)
{
    int t;
    if(rear<N)
    {
        printf("\nEnter a value\n");
        scanf("%d",&t);
        queue[rear]=t;
        rear++;
    }
    else
    {
        printf("\nQ Overflow!!!\n");
    }
}
/******Deletion*****/
void del(void)
{
    int i;
    printf("\n%d gets deleted\n",queue[front]);
    queue[front]=0;
    front++;
}
/******Display****/
void display(void)
{
    int i;
    for(i=front;i<rear;i++)
    {
        printf("\n %d \n",queue[i]);
    }
}
