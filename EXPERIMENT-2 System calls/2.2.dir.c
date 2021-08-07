// Program to Display the contents of the file


#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
 DIR *dp;
 struct dirent *de;
 int i;
 if(argc==1)//Without arguments printing current directory files
 {
 argv[1]=".";
 argc++;
 }
 for(i=1;i<argc;++i)
 {
 dp=opendir(argv[i]);
 if(dp==NULL)
 {
 perror(argv[i]);
 exit(1);
 }
 printf("%s:\n",argv[i]);
 while((de=readdir(dp))!=NULL)
 { 
 if(de->d_name[0]!='.')//ignoring file which start with dot(.)
 printf("%s\t",de->d_name);
 } 
 printf("\n");
 closedir(dp);
 } 
 return 0;
}
