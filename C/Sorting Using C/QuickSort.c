#include <stdio.h>

void printArray(int*,int);
void quickSort(int*,int,int);

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

    quickSort(A, 0, size-1);
    
    printf("\nASCENDING ORDER SORTED ARRAY: ");
    
    printArray(A, size);
    return 0;
}

int partition(int *A, int low,int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while(A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if(i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while(i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quickSort(int *A, int low, int high)
{
    int partitionIndex; //Index of the pivot after partition
    
    if(low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);  //sort left sub array
        quickSort(A, partitionIndex+1, high);   //sort right sub array
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