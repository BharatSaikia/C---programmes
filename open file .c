#include<stdio.h>
#include<fcntl.h>
void main()
{
int f,b;
char buff[7];
f=open("new.txt",O_RDONLY);
b=read(f,buff,sizeof(buff));
write(1,buff,sizeof(buff));
}
