#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
int f,fd,b;
char buff[1];

f=open("new1.txt",O_RDONLY);
fd=open("new2.txt",O_WRONLY);
b=read(f,buff,sizeof(buff));
while(b>0)
{
b=read(f,buff,sizeof(buff));
write(fd,buff,sizeof(buff));
}

}
