#include <stdio.h>

void insertionSort(int *, int);
void printArray(int *, int);

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

    insertionSort(A, size);
    
    printf("\nASCENDING ORDER SORTED ARRAY: ");
    
    printArray(A, size);
    return 0;
}

void insertionSort(int *A, int size)
{
    int key, j;
    //Loop for passes
    for (int i = 1; i < size; i++)
    {
        key = A[i];
        //Loop for each passes
        for(j = i-1; j >= 0 && A[j] > key; j--)
        {
            A[j+1] = A[j];
        }
        A[j+1] = key;
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