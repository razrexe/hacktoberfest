#include <stdio.h>

int main()
{
    int i, n, j, temp, min;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        //set the current minimum
        min = i;
        for(j = i + 1; j < n; j++) //to find the minimum
            if(arr[j] < arr[min])
                min = j;
        
        //swapping
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
    getch();
}
