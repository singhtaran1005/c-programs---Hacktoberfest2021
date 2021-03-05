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
#define pqq priority_queue
#define reverse(a) reverse(all(a))
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, n) for (int i = 0; i < n; ++i)
#define c(a) cout << a << "\n";
#define ll long long int
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...)
#endif
#define out(container)        \
    for (auto it : container) \
        cout << it << " ";    \
    cout << endl;
using namespace std;
ll n=1e8; 
void sieve()
{
    ll i,j;
    vector<char> is_prime(n+1, true);
    ll count=1;

	is_prime[0]=false;
	is_prime[1]=false;

	for(int i=2;i*i<=n;i++)
	{
		if(is_prime[i])
		{
			for(int j=i*i;j<=n;j+=i)
				is_prime[j]=false;
		}
	}
    cout << 2 << endl;
    for(i=3;i<is_prime.size();++i)
    {
        if(is_prime[i]) count++;
        // cout << count << endl;
        if(count%100==1&&is_prime[i])
        cout << i << endl;
    }
}
int main()
{  
    sieve();
    return 0;
}
