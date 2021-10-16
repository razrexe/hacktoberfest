#include <stdio.h>

void mergeSort(int*,int,int);
void printArray(int*,int);

int size;

int main()
{
    printf("\nHOW MANY NUMBERS DO YOU WANT TO SORT?: ");
    scanf("%d",&size);
    int A[size];
    printf("\nENTER THE NUMBERS TO BE SORTED: ");
    
    for (int i = 0; i < size; i++)
        scanf("%d",&A[i]);

    printf("\nUNSORTED ARRAY: ");
    printArray(A, size);

    mergeSort(A, 0, size-1);
    
    printf("\nASCENDING ORDER SORTED ARRAY: ");
    
    printArray(A, size);
    return 0;
}

void merge(int *A, int l, int m, int r)
{
    int i = l;      //starting index of left sub array
    int j = m+1;    // starting index of right sub array
    int k = l;

    int temp[size];

    while(i <= m && j <= r)
    {
        if(A[i] <= A[j])
        {
            temp[k] = A[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = A[j];
            k++;
            j++;
        }
    }

    while(i <= m)
    {
        temp[k] = A[i];
        k++;
        i++; 
    }
    while(j <= r)
    {
        temp[k] = A[j];
        k++;
        j++;
    }
    for (int p = l; p <= r; p++)
    {
        A[p] = temp[p];
    }
    
}

void mergeSort(int *A, int l, int r)
{
    if(l < r)
    {
        int m = (l+r)/2;
        mergeSort(A, l, m);
        mergeSort(A, m+1, r);
        merge(A, l, m, r);
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