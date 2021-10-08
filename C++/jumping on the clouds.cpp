// HACKERRANK
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int jump = 0;
    for (i = 0; i < n; i++)
    {
        if (i == (n - 1))
            break;
        else
        {
            if (c[i + 2] == 1)
                jump++;
            else
            {
                jump++;
                ++i;
            }
        }
    }
    cout << jump << endl;
    return 0;
}
