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
  for (int qq = 0; qq < tt; qq++) {
    debug(qq);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> upper;
    map<char, int> lower;
    for (char &c : s) {
      if (isupper(c)) {
        upper[c]++;
      } else {
        lower[c]++;
      }
    }
    int ans = 0;
    for (char ch = 'a'; ch <= 'z'; ch++) {
      int b = min(upper[toupper(ch)], lower[tolower(ch)]);
      upper[toupper(ch)] -= b;
      lower[tolower(ch)] -= b;
      ans += b;
      debug(ans);
      int remaining = upper[toupper(ch)] + lower[tolower(ch)];
      remaining /= 2;
      remaining = min(remaining, k);
      k -= remaining;
      ans += remaining;
      debug(ans);
    }
    cout << ans << '\n';
  }

  return 0;
}
