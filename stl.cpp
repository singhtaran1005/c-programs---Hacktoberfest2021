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
#define ll long long int
#define pqq priority_queue
#define IOS                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define rep(i, n) for (int i = 0; i < n; ++i)
#define c(a) cout << a << "\n";
using namespace std;
// stl  -> (dsa oriented)
// int main() {
//   // pair
//   pair<int, int> p= {10, 20};
//   cout << p.first << " " << p.second << "\n";

//   pair<int, int> p1;
//   for (int i = 0; i < 1; i++) {
//     p1 = make_pair(i, i + 1);
//   }
//   cout << p1.first << " " << p1.second << "\n";

//   // pair of pairs
//   pair<int, pair<int, int>> p2 = {10, {20, 30}};
//   cout << p2.first << " " << p2.second.first << " " << p2.second.second <<
//   "\n";
// }
// int main() {

//   // vector + (using iterators)dynamic array

//   vector<int> v = {1, 2, 3, 4, 5};
//   for (auto i : v) {
//     cout << i << "\n";
//   }
//   for (int i = 0; i < v.size(); i++) {
//     cout << v[i] << "\n";
//   }

//   vector<int> v2;
//   v2.push_back(1); // O(1)
//   v2.push_back(2);
//   for (auto j : v2) {
//     cout << j << "\n";
//   }
//   v2.pop_back(); // O(1)
//   for (auto j : v2) {
//     cout << j << "\n";
//   }

//   vector<int> v3;
//   for (int i = 1; i <= 3; i++) {
//     v3.push_back(i);
//   }

//   vector<int>::iterator it = v3.begin();
//   cout << *it << endl;

//   for (auto i = v3.begin(); i != v3.end(); i++) {
//     cout << *i << endl;
//   }

//   for (auto i = v3.rbegin(); i != v3.rend(); i++) {
//     cout << *i << endl;
//   }

//   // m.begin()
//   //   : points the iterator to starting element.m
//   //          .end()
//   //    : points the iterator to the element after the last which is
//   //          theoretical.vector of pairs

//   vector<pair<int, int>> v4;
//   v4.push_back(make_pair(1, 2));

//   v4.push_back({1, 2});
//   vector<int> v5(2, 10); // {10,10}
//   vector<int>v9(4,10); // {10,10,10,10}
//   v9.resize(3);
//   for (auto i : v5) {
//     cout << i << endl;
//   }

//   vector<int> v6(2, 2); // two elements = 2 2
//   vector<int> v7(v6);   // 2 quantity 2 size elements
//   for (auto i : v7) {
//     cout << i << endl;
//   }
//   v7.erase(v7.begin()); // O(n^2)
//   v7.erase(v7.begin(),v7.begin()+2);
//   vector<int> v8;
//   v8.push_back(1);
//   v8.push_back(2);
//   v8.emplace_back(3);
//   v8.insert(v8.begin() + 2, 2);
//   for (int i = 0; i < v8.size(); i++) {
//     cout << v8[i] << endl;
//   }
//   v8.clear(); // O(n)  //clears the entire vector
//   v8.empty();
// }
// int main() {

//   // deque(dynamic containers) // O(1)
//   // same as vector but front push operations Insertion or
//   // removal of elements at the end or beginning - constant O(1) Insertion
//   // or removal of elements - linear O(n)
//   deque<int> dq;
//   dq.push_back(1);
//   dq.push_back(2);
//   cout << dq.front() << endl;
//   cout << dq.back() << endl;
//   for (auto i : dq) {
//     cout << i << endl;
//   }
//   dq.pop_back();
//   dq.pop_front();
// }
// int main() {
//   // stack NO DIRECT ACCESS OF ELEMENTS
//   stack<int> s; // LIFO
//   s.push(10);   // O(1)
//   s.push(20);
//   s.push(30);
//   cout << s.size() << "\n";
//   cout << s.top() << "\n";   // O(1)
//   cout << s.empty() << "\n"; // O(1)
//   s.pop();                   // O(1)

//   while (!s.empty()) {
//     cout << s.top() << "\n";
//     s.pop();
//   }
//   stack<pair<int, int>> st;
// st.push({1, 2});
// st.push({3, 4});
// while (!st.empty()) {
//   cout << st.top().first << " " << st.top().second << "\n";
//   st.pop();
// stack<int> s1, s2;
// s1.push(10);
// s1.push(20);
// s2=s1;
// while (!s1.empty()) {
//   cout << s1.top() << "\n";
//   s1.pop();
// }
// while (!s2.empty()) {
//   cout << s2.top() << "\n";
//   s2.pop();
// }
// }
// }

// int main() {
//   // queue
//   queue<int> q; // FIFO  //dynamic in size
//   // stores first inserted element at the top
//   q.push(1); // O(1)
//   q.push(2);
//   q.push(3);                 //{1,2,3}
//   cout << q.front() << "\n"; // O(1)
//   cout << q.back() << "\n";  // O(1)
//   while (!q.empty()) {
//     cout << q.front() << "\n";
//     q.pop(); // O(1)
//   }
//   queue<int> q1;
//   q1.push(10);
//   q1.push(11);
//   cout << q1.back() << "\n"; // O(1)
//   cout << q1.size() << "\n"; // O(1)
// }

// int main() {
// priority queue stores element in sorted manner max heap // normal heap

// priority_queue<int> pq; // greater to low (descending order)
// pq.push(10);
// pq.push(20);   // O(logn)
// pq.emplace(1);
// while (!(pq.empty())) {
//   cout << pq.top() << "\n";
//   pq.pop(); // O(logn)
// }
// cout << pq.top() << "\n"; // O(1)

// now building a min heap(ascending order)
// priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>
// pq, pq2; greater<int>  will store evrything in reversible
// manner(comparator)
// pq.push(10);
// pq.push(20);
// pq.push(40);
// pq2 = pq;
// while (!(pq.empty())) {
//   cout << pq.top() << "\n";
//   pq.pop();
// }
// while (!(pq2.empty())) {
//   cout << pq2.top() << "\n";
//   pq2.pop();
// }
// cout << pq.top() << "\n";
//   cout << pq.size() << "\n";
//   cout << pq.empty() << "\n"; // O(1)
// }

// int main() {
//   // set(stores elements in sorted manner and stores distinct elements)
//   set<int> s;
//   s.insert(10);
//   s.insert(10);
//   s.insert(20);
//   s.emplace(30); // behaves similar to insert
//   for (auto i : s) {
//     cout << i << " ";
//   }
//   cout << "\n";

//   if (s.find(10) != s.end()) {
//     cout << "found " << endl;
//   }
//   cout << s.size() << endl;
//   auto i = s.begin();
//   cout << *i << "\n";
//   // s.erase(i);
//   // if (want to erase in range) ->then erases first to last - 1
//   for (auto i : s) {
//     cout << i << " ";
//   }
//   cout << s.count(10) << endl;
// }

// int main() {
// unordered set(distinct elements but not in sorted manner)
//(more efficient)
// }

// int main() {
//   // multiset(same as set but can store duplicate elements ps
//   //          : in sorted manner)
//   multiset<int> mu;
//   mu.insert(10);
//   mu.insert(20);
//   mu.insert(30);
//   mu.insert(10);
//   mu.emplace(10);
//   for (auto i : mu) {
//     cout << "BEFORE = " << i << endl;
//   }
//   mu.erase(10);          // delete all its occurrences
// mu.erase(mu.find(10)); // delete only single occurrence
//   for (auto i : mu) {
//     cout << "AFTER = " << i << endl;
//   // }
// }

// int main() {
//   // map(map - frequency){key - value pair ds} stores everything in sorted
//   // manner according to key)
//   map<int, int> m;
//   // m[key] = value // key -> value
//   m[10] = 1;
//   m[30] = 2;
//   m.insert({20, 1}); // O(logn)
//   for (auto i : m) {
//     cout << i.first << " " << i.second << endl;
//   }
//   map<pair<string, string>, string> m1;

//   m1[{"taran", "karan"}] = "kiit";
//   for (auto i : m1) {
//     cout << i.first.first << " " << i.first.second << " -> " << i.second
//          << endl;
//   }
//   // to directly print the value of any key
//   cout << m1[{"taran", "karan"}]; // {kiit}

//   auto it = m.find(10); // O(logn)
//   cout << (*it).second << endl;
//   cout << it->second << endl;

//   m.erase(10); // erase function erases the respective key   //O(logn)
//   for (auto i : m) {
//     cout << i.first << endl << i.second;
//   }

//   cout << m.size() << endl; // O(1)
//   m.clear();                // clear the whole map   // theta(n)
//   cout << m.size() << endl;

// }

// int main() {
// unordered map(more efficient)
// insert,delete,search in O(1) -> average and O(n)- > worst case
// }
// int main() {
// if key value pair are exactly similar then you should think of multimap
// store multiple keys
// multimap
// }

// other ->

// int main() {
// sort
// vector<int> a = {5, 2, 1, 6, 4, 3};
// int arr[n];
// sort(arr,arr+n);
// sort(a.begin(), a.end());
// sort(a.begin(), a.end(), greater<int>());
// for (auto i : a) {
//   cout << i << " ";
// }
// reverse(arr,arr + n);
// reverse(a.begin(), a.end());
// for (auto i : a) {
//   cout << i << " ";
// }
// }
// int main() {
// max_element
// min_element
//   vector<int> a = {4, 5, 6, 2, 7, 8};
//   cout << "MAX = " << *max_element(a.begin(), a.end()) << endl;
//   cout << "MIN = " << *min_element(a.begin(), a.end()) << endl;
// }
// int main() {
// __builtin_popcount
// count set bits in binary representation of the number
//   int a = 10; // 1100
//   int calculate = __builtin_popcount(a);
//   cout << calculate << " ";
// }
// int main() {
// next_permutation
//   string a = "123";
//   next_permutation(a.begin(), a.end());
//   cout << a;
// }
// int main() {
// count    // O(n)
// count() returns number of occurrences of an element in a given range
// vector<int> a = {1, 1, 1, 4, 5};
// cout << count(a.begin(), a.end(), 1) << endl;
// lower_bound   //O(logN)
// The lower_bound() method in C++ is used to return an iterator pointing to
// the first element in the range [first, last) which has a value not less
// than val.
// vector<int>::iterator it;
// it = lower_bound(a.begin(), a.end(), 3);
// cout << *it << endl;
// upper bound  //log2(last – first) + O(1) comparisons
// It returns an iterator pointing to the first element in the range [first,
// last) that is greater than value, or last if no such element is found
// vector<int>::iterator it1;
// it1 = upper_bound(a.begin(), a.end(), 3);
// cout << *it1 << endl;

// accumulate
// }


// auto converts it to an iterator(given one)
