#include<stdio.h>
#include<fcntl.h>
int main()
{
int f,b;
char buff[1];
f=open("new.txt",O_CREAT/O_WRONLY,00777);
b=read(f,buff,sizeof(buff));
printf("%d",b);
}
