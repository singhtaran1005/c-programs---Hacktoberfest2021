// * AUTHOR :: TARANPREET {SINGH} CHABBRA  *//
//* {CODE : CODECHEF} *//
//* {TIME :  2021-05-18 17:16:22}  *//
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
void solve() {
  ll n;
  cin >> n;
  ll left[n], right[n], speed[n];
  ll i, j, count = 0;
  for (i = 0; i < n; ++i) {
    cin >> left[i];
    cin >> right[i];
    cin >> speed[i];
  }
  map<int, vector<pair<int, int>>> m;
  for (i = 0; i < n; ++i) {
    m[speed[i]].push_back({left[i], right[i]});
  }
  bool flag = true;
  for (auto i : m) {
    vector<pair<int, int>> m1 = i.second;
    int n1 = m1.size();
    ll left1[n1], right1[n1];
    for (int k = 0; k < n1; ++k) {
      left1[k] = m1[k].first;
      right1[k] = m1[k].second;
    }
    sort(left1, left1 + n1);
    sort(right1, right1 + n1);
    count = 0;
    int start = 0, end = 0;
    while (start < n1 && end < n1) {
      if (left1[start] <= right1[end]) {
        count++;
        start++;
      } else {
        count--;
        end++;
      }
      if (count >= 3) {
        flag = false;

      } // intersection becomes greater than 3 npos
    }
  }
  if (flag == false) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}

int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  // solve();
  return 0;
}
