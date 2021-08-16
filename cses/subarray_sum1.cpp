#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <string>
#define SIZE 100008
#define max(a, b) (a > b ? a : b)
#define vi vector<int>
#define INF 0x3f3f3f3f
#define abs(a) ((a) > 0 ? (a) : -(a))
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
void solve() {
  ll n, x;
  cin >> n >> x;
  ll arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  ll prefix[n + 1];
  int count = 0;
  map<ll, ll> mp;
  prefix[0] = arr[0];
  for (int i = 1; i < n; ++i) {
    prefix[i] = prefix[i - 1] + arr[i];
  }
  ll temp = 0;
  mp[0] = 1;
  for (int i = 0; i < n; ++i) {
    temp = prefix[i];
    ll left = (temp - x);
    if (mp.find(left) != mp.end()) {
      count++;
    }
    mp[temp]++;
  }
  cout << count << "\n";
}
int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
