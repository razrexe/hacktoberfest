// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int l1 = l, r1 = m+1;
         vector<int> temp;
         while(l1 <= m && r1 <= r)
         {
             if(arr[l1] > arr[r1])
                temp.push_back(arr[r1++]);
            else
                temp.push_back(arr[l1++]);
         }
         while(l1 <= m)
            temp.push_back(arr[l1++]);
         while(r1 <= r)
            temp.push_back(arr[r1++]);
         for(int i = l ; i <= r ; i++)
            arr[i] = temp[i-l];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l == r)
            return;
        int mid = l + (r - l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends