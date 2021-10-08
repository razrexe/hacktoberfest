// HACKERRANK
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int budget;
    cin >> n >> budget;
    long long int arr[n];
    long long int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long int sum = 0;
    int toy = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum > budget)
            break;
        else
            toy++;
    }
    cout << toy << endl;
    return 0;
}
