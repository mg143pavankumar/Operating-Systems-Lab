// Program for Moving the contents from one file to another file

#include<stdio.h> 
#include<fcntl.h> 
#include<sys/types.h> 
#include<stdlib.h> 
#include<string.h> 
#include<unistd.h> 
int main(int argc,char *argv[]) 
{ 
char buff[512]; 
int f1,f2,n; 
if(argc!=3) 
{ 
printf("error"); 
return 0; 
} 
if((f1=open(argv[1],O_RDONLY))<0) 
printf("ERROR IN OPENING"); 
if((f2=creat(argv[2],0644))<0) 
printf("ERROR IN CREATING"); 
while((n=read(f1,buff,sizeof(buff)))>0) 
if((write(f2,buff,n))<n) 
printf("WRITE ERROR"); 
close(f2); 
remove(argv[1]); }
