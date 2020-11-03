#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    int n;
    int i;
    map<string, int> m;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> q;
        string x;
        int y;

        switch (q)
        {
        case 1:
        {
            cin >> x >> y;
            auto it = m.find(x);
            if (it == m.end())
            {
                m.insert(make_pair(x, y));
            }
            else
            {
                it->second += y;
            }
            break;
        }
        case 2:
        {
            cin >> x;
            m.erase(x);
            break;
        }
        case 3:
        {
            cin >> x;
            auto it1 = m.find(x);
            if (it1 == m.end())
            {
                cout << "0" << endl;
            }
            else
            {
                cout << it1->second << endl;
            }
            break;
        }
        }
    }

    return 0;
}
