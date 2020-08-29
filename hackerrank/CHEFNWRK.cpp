#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        int sum = 0, i;
        int c = 0;
        cin >> N >> K;
        int a[N];
        for (i = 0; i < N; i++)
        {
            cin >> a[i];

            if (a[i] > K)

                c = 1;
        }
        if (c == 1)
            cout << "-1" << endl;
        else
            for (i = 0; i < N; i++)
            {
                sum += a[i];
                if (sum > K)
                {
                    c++;
                    i--;
                    sum = 0;
                }
            }
        if (sum)
        {
            c++;
            cout << c << endl;
            c = 0;
        }
    }
    return 0;
}
