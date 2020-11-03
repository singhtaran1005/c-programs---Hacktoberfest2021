#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    // int n;
    // vector<int>a(n);
    // for(int x : a)
    // cin >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int n1, x1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        cin >> x1;
        vector<int>::iterator it = lower_bound(a.begin(), a.end(), x1);
        if (a[it - a.begin()] == x1)
            cout << "Yes " << (it - a.begin() + 1) << endl;
        else
            cout << "No " << (it - a.begin() + 1) << endl;
    }

    return 0;
}
