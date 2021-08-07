// Program to Display file information
#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h> 
#include<sys/types.h> 
#include<stdlib.h> 
#include<string.h> 
#include<unistd.h> 
int main()
{
struct stat sfile;
stat("stat1.c",&sfile);
printf("The st_mode of the file is: =%o",sfile.st_mode);
printf("\n The size of the file is :%d",sfile.st_size);
printf("\n The user id of the file is :%d",sfile.st_uid);
printf("\n The group id of the file is: %d",sfile.st_gid);
return 0;
}
