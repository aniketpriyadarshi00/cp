#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int current;

void dfs(int u, vector<vector<int>> &adj, vector<int> &size,
         vector<bool> &visited) {
  visited[u] = true;
  size[u] = current--;
  for (auto &v : adj[u]) {
    if (!visited[v]) {
      dfs(v, adj, size, visited);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (a[i][j] == '1') {
          adj[j].push_back(i);
        }
      }
    }
    int source = 0;
    for (int i = 0; i < n; i++) {
      if (adj[i].size() > adj[source].size()) {
        source = i;
      }
    }
    vector<int> size(n, n);
    vector<bool> visited(n, false);
    current = n;
    dfs(source, adj, size, visited);
    for (int i = 0; i < n; i++) {
      cout << size[i] << ' ';
      for (int j = 1; j <= size[i]; j++) {
        cout << j << ' ';
      }
      cout << '\n';
    }
  }

  return 0;
}
