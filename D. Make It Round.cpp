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

  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    int ans = n * 1;
    for (int i = 2; i <= m; i++) {
      ans = max(ans, n * i);
    }
    cout << ans << '\n';
  }

  return 0;
}
