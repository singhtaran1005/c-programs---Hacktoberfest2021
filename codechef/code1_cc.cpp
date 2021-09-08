#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <ratio>
#include <string>
#define SIZE 100008
#define max(a, b) (a > b ? a : b)
#define vi vector<int>
#define INF 0x3f3f3f3f
#define abs(a) ((a) > 0 ? (a) : -(a))
#define min(a, b) (a < b ? a : b)
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

  ll n;
  cin >> n;
  ll arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  bool flag = false;
  int count = 0;
  for (int i = 0; i < n; ++i) {
    // if (i + 1 < n) {
    if (arr[0] < arr[i]) {
      flag = true;
    }
    // cout << arr[0];
    // cout << arr[i] << "\n";
  }
  // ll arr2[n];
  // arr2[n - 1] = arr[n - 1];
  // for (int i = n - 1; i > 0; i--) {
  //   if()
  // }
  stack<ll> st;
  for (int i = 0; i < n; i++) {
    // i
    if (i == 0) {
      st.push(INF);
    } else {
      while (arr[i] >= st.top()) {
        st.pop();
      }
      st.push(arr[i]);
    }
  }
  if (flag == true) {
    cout << -1 << "\n";
  } else {
    cout << st.size()-1 << "\n";
  }
}
int main() {

  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}