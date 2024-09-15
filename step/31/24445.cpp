#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m, r, u, v;
vector<int> graph[100001];
int visited[100001];
int order = 1;
queue<int> q;

void bfs(int current) {
  visited[current] = order++;
  q.push(current);
  while (!q.empty()) {
    current = q.front();
    q.pop();
    for (int next : graph[current]) {
      if (!visited[next]) {
        visited[next] = order++;
        q.push(next);
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m >> r;
  for (int i = 0; i < m; i++) {
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  for (int i = 1; i <= n; i++) {
    sort(graph[i].begin(), graph[i].end(), greater<int>());
  }
  bfs(r);
  for (int i = 1; i <= n; i++) {
    cout << visited[i] << "\n";
  }
  return 0;
}
