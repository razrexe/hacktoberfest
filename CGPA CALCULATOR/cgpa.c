#include<stdio.h>
#include<string.h>
void main()
{
int tot=0,n,i,sum=0,m[20],cr[20];
char gr[5];
float cgpa;
printf("--CGPA CALCULATOR--");
printf("\nEnter total number of subjects(including lab):");
scanf("%d",&n);
printf("--Enter subject(s) grade with credits--\n");
for(i=0;i<n;i++)
{
printf("\nSUBJECT-%d grade: ",i+1);
scanf("%s",gr);
if(strcmp("A+",gr)==0)
m[i]=10;
else if(strcmp("A",gr)==0)
m[i]=9;
else if(strcmp("A-",gr)==0)
m[i]=8;
else if(strcmp("B+",gr)==0)
m[i]=7;
else if(strcmp("B",gr)==0)
m[i]=6;
else if(strcmp("C",gr)==0)
m[i]=5;
else
m[i]=0;
printf("Credits: ",i+1);
scanf("%d",&cr[i]);
}
for(i=0;i<n;i++)
{
sum+=cr[i];
tot+=m[i]*cr[i];
}
cgpa=(float)tot/(float)sum;
printf("\nCGPA is: %5.2f",cgpa);
}
