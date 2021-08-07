#include<stdio.h>
#include<unistd.h>
void main()
{
int b[20],l[20],n,i,pa,s,a,d;
printf(“\nProgram for segmentation”);
printf(“\nEnter the number of segments:”);
scanf(“%d”,&n);
printf(“\nEnter the base address and limit register:”);
for(i=0;i<n;i++)
{
scanf(“%d”,&b[i]);
scanf(“%d”,&l[i])
}
printf(“\nEnter the logical address:”);
scanf(“%d”,&d);
printf(”Enter the segment number:”);
scanf(“%d”,&s);
for(i=0;i<n;i++)
{
if(i==s)
{
if(d<l[i])
{
pa=b[i]+d;
a=b[i];
printf(“(“\n\tSegNo.\t BaseAdd. PhysicalAdd. \n\t %d \t %d \t%d \t ”,s,a,pa);
}
else
{
printf(“\nPage size exceeds”);
}
}
}
printf(“\nInvalid segment”);
}
