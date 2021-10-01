#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int* generateUD(int size,int mean,int width)
{
    int start,end;
    start=mean-width;
    end=mean+width;
    int* a=malloc(size*sizeof(int));
    srand(time(0));
    for(int i=0;i<size;i++)
    {
        a[i]=rand()%(end-start+1)+start;
    }
    return a;
}

/*int main()
{
    int s,m,w;
    printf("Enter the size,mean and width of the uniform dataset:");
    scanf("%d%d%d",&s,&m,&w);
    int *a=generateUD(s,m,w);
    for(int i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/