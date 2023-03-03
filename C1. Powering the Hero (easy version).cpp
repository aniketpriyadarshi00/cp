#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long tt;
  cin >> tt;
  while (tt--) {
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long ans = 0;
    for (long long i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<long long> bonus;
    for (long long i = 0; i < n; i++) {
      if (a[i] > 0) {
        bonus.push_back(a[i]);
        sort(bonus.begin(), bonus.end(), greater<long long>());
      } else {
        if (bonus.size() > 0) {
          ans += bonus.front();
          bonus.erase(bonus.begin());
        }
      }
    }
    cout << ans << '\n';
  }

  return 0;
}
