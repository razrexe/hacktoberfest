// HACKERRANK
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k;
        cin >> k >> n;
        long int i, j, x = 0, y = 0, arr[n];
        for (i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (i = 1; i <= n; i++)
        {
            for (j = (i + 1); j <= n; j++)
            {
                if (arr[i] + arr[j] == k)
                {
                    x = i;
                    y = j;
                    if (x > y)
                    {
                        cout << y << " " << x << endl;
                        break;
                    }
                    else
                    {
                        cout << x << " " << y << endl;
                        break;
                    }
                }
            }
            //if (arr[i] + arr[j] == k)
            //    break;
        }
    }
    return 0;
}
