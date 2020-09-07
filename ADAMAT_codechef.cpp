#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    cin >> t;
    while (t--)
   {
    
    int n = 64;
    cin >> n;

    int a[n+1][n+1];
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    int dup = n;
    bool k = 0;
    int count=0;
    while (dup != 0)
    {
        int j = 1, i = dup;

        if (k)
            swap(a[i][j], a[j][i]);

        if (a[i][j] != (i - 1) * n + j)
        {
            k = 1 - k;
            count++;
        }
        dup -= 1;
    }
    cout << count << endl;
}return 0;
}

