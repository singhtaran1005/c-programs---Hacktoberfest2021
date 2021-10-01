/******************************
     AUTHOR KRISH MURARKA
*******************************/
#include<bits/stdc++.h>
using namespace std;
#define ll                 long long int
#define mod                1000000007
#define modulo             998244353
#define popcount           __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount         __builtin_popcountll   
#define parity             __builtin_parity // returns true(1) if number has odd parity i.e odd no of set bits
#define llparity           __builtin_parityll 
#define leadzero           __builtin_clz  //returns number of leading zeros of a 32 bit int 
#define llleadzero         __builtin_clzll // returns number of leading zero of a 64 bit int 
#define trailzero          __builtin_ctz  // returns number of trailing zero 
#define lltrailzero        __builtin_ctzll 
#define f                  first
#define s                  second
#define pb                 push_back
#define popb               pop_back
#define inf                (ll)(1e6+7)
#define rep(i,a,b)         for(int i=a;i<b;i++)
#define pll                pair<ll,ll>
#define ppl                pair<pair<ll,ll>>
#define mem1(a)            memset(a,-1,sizeof(a))
#define mem0(a)            memset(a,0,sizeof(a))
#define fast               ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define deb(x)             cout<<#x<<" "<<x<<"\n"
#define uid(l,r)           uniform_int_distribution<int>(l,r); // to use auto temp= uid(l,r). int x= temp(rng); to generate from [L,R]
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;} // only use in equations like sum=max(sum,x)  its equivalent ot amax(sum,x) => sums is changed automatically
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 
 
void read_input()
{
  #ifndef ONLINE_JUDGE
  freopen("inputA.txt","r",stdin);
  freopen("outputA.txt","w",stdout);
  #endif
}
int n;
ll sum;
vector<ll> a(100);
ll dp[2000000];
ll fun(ll x)
{
   // cout<<"x"<<x<<"\n"<<n<<"\n"; 
    if(x==0)return 1;
    if(dp[x]!=-1)return dp[x];
    ll pick=0;
    for(int i=0;i<n;i++)
    {
         // cout<<"hi";
         if(a[i]<=x)
         {
           // cout<<"hi";
            pick=(pick+fun(x-a[i])%mod)%mod;
         }
    }
    // cout<<x<<" ";
    return dp[x]=pick;
}
void solving()
{
    cin>>n>>sum;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    mem1(dp);
    ll ans=fun(sum)%mod;
    cout<<ans<<"\n";
}
int main()
{
    fast;
    read_input();
    int t=1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {  
    //cout<<"Case #"<<i<<": ";
     solving();
 
    }
   
    return 0;
}
