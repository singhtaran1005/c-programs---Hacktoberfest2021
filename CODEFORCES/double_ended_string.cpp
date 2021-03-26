// * AUTHOR :: TARANPREET {SINGH} CHABBRA  *//
//* {CODE : CODEFORCES} *//
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <string>
#define SIZE 100008
#define mod (ll)(1e9 + 7)
#define vi vector<int>
#define INF 0x3f3f3f3f
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define abs(a) ((a) > 0 ? (a) : -(a))
#define sc(a) scanf("%d\n", &a);
#define all(a) a.begin(), a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb push_back
#define pi pair<ll, ll>
#define ll long long int
#define pqq priority_queue
#define reverse(a) reverse(all(a))
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, n) for (int i = 0; i < n; ++i)
#define c(a) cout << a << "\n";
using namespace std;
ll LCSubStr(string X, string Y, ll m, ll n)
{
    ll LCSuff[m + 1][n + 1];
    ll result = 0;
    for (ll i = 0; i <= m; i++)
    {
        for (ll j = 0; j <= n; j++)
        {
            
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1])
            {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}
 

void solve()
{
    string a,b;
    cin >> a >> b;
    ll m=a.size();
    ll n=b.size();
    ll answer=LCSubStr(a,b,m,n);
    // cout << answer << endl;
    cout << n-answer+m-answer << endl;
}
int main()
{
    IOS
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}