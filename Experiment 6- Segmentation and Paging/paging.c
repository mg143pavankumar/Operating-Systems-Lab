#include<stdio.h>
#include<unistd.h>
void main()
{
int b[20],n,i,pa,p,a,d,ba;
printf(“\nProgram for paging”);
printf(“Enter the number of pages:”);
scanf(“%d”,&n);
printf(“\nEnter the base address:”);
for(i=0;i<n;i++)
{
scanf(“%d”,&b[i]);
}
printf(“\nEnter the logical address:”);
scanf(“%d”,&ba);
Printf(“Enter the page number:”);
scanf(“%d”,&p);
for(i=0;i<n;i++)
{
if(i==p)
{
pa=b[i]+d;
a=b[i];
printf(“\n\tPageNo.\t BaseAdd. PhysicalAdd. \n\t %d \t %d \t %d \t”,p,a,pa);
}
}
printf(“\nInvalid page”);
}
