#include <bits/stdc++.h>
#include <cctype>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
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
#define IOS                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define rep(i, n) for (int i = 0; i < n; ++i)
#define c(a) cout << a << "\n";
using namespace std;
const ll N = 1e9 + 7;
// int dp[5001][2][2];
vector<ll> adjacency[200005];
void dfs(ll node, ll parent, ll ans[]) {
  ll countSub = 0;
  for (auto i : adjacency[node]) {
    if (i != parent) {
      dfs(i, node, ans);
      countSub += (1 + ans[i]); // 1+ for the same sub ans[i]
    }
  }
  ans[node] = countSub; // ans at ith node to be suborodinate
}
void solve() {
  ll n;
  cin >> n;
  ll ans[n + 1];
  for (ll i = 2; i < n + 1; i++) {
    ll x;
    cin >> x;
    adjacency[x].push_back(i);
    adjacency[i].push_back(x);
  }
  dfs(1, 0, ans);
  for (ll i = 1; i < n + 1; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
}
// noob
int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
