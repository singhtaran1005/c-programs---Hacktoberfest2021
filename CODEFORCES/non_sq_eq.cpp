// * AUTHOR :: TARANPREET {SINGH} CHABBRA  *//
//* {CODE : CODEFORCES} *//
//* codeforces round #144 *//
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
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;
ll rem(ll n)
{
    ll sum=0;
    while(n!=0)
    {
        ll d=n%10;
        sum+=d;
        n/=10;
    }
    return sum;

}
void solve()
{
    ll n;
    cin >> n;
    ll i,j,count=0;
    // while(n!=0)
    // {

    // }
    ll store=0,m=0;
    bool flag=false;
    for(i=0;i<=100;++i)
    {
        store=sqrt(i*i+4*n);
        m=store-i;
        if(!(m&1) && rem(m/2)==i)
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
    cout << m/2 << endl;
    else
    {
        cout << "-1" << endl;
    }
    
}
int main()
{
    IOS
    solve();
    return 0;
}