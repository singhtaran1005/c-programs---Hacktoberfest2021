// * AUTHOR :: TARANPREET {SINGH} CHABBRA  *//
//* {CODE : CSES} *//
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
  vector<ll> arr(n);
  ll i, j, count = 0;
  ll result = 0;
  if (n == 1) {
    cout << "1"
         << "\n";
    return;
  }
  if (n == 2 || n == 3) {
    cout << "NO SOLUTION"
         << "\n";
    return;
  }
  for (i = 2; i <= n; i += 2) {
    cout << i << " ";
  }
    for (i = 1; i <= n; i += 2) {
      cout << i << " ";
    }
//   }

  cout << endl;
}

int main() {
  IOS ll t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  // solve();
  return 0;
}