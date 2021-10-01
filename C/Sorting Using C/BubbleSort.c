//not Adaptive by default
#include <stdio.h>

void printArray(int*,int);
void bubbleSort(int*,int);

int main()
{
    int size;
    printf("\nHOW MANY NUMBERS DO YOU WANT TO SORT?: ");
    scanf("%d",&size);
    int A[size];
    printf("\nENTER THE NUMBERS TO BE SORTED: ");
    
    for (int i = 0; i < size; i++)
        scanf("%d",&A[i]);

    printf("\nUNSORTED ARRAY: ");
    printArray(A, size);

    bubbleSort(A, size);
    
    printf("\nASCENDING ORDER SORTED ARRAY: ");
    
    printArray(A, size);
    return 0;
}

/*
void bubbleSortAdaptive(int *A, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int count = 0;
        for (int j = 0; j < size-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                count++;
            }
        }
        if(count)   //added in order to make adaptive
            return;
    }
}
*/

void bubbleSort(int *A, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void printArray(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}