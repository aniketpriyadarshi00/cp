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

  int n;
  cin >> n;
  vector<vector<int>> adj(n);
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++) {
      if (s[j] == '1') {
        adj[j].push_back(i);
      }
    }
  }

  return 0;
}
