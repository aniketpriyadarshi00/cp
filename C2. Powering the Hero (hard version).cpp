#include "bits/stdc++.h"
#include <stdio.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> hero;
    vector<pair<int, int>> bonus;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 0) {
        hero.insert(i);
      } else {
        bonus.push_back({a[i], i});
      }
    }
    int ans = 0;
    sort(bonus.begin(), bonus.end(), greater<pair<int, int>>());
    for (auto &p : bonus) {
      auto it = hero.lower_bound(p.second);
      if (it != hero.end()) {
        hero.erase(it);
      }
      ans += p.first;
    }
    cout << ans << '\n';
  }

  return 0;
}
