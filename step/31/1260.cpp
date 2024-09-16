#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m, v, v1, v2;
vector<int> graph[1001];
int dfs_visited[1001];
int bfs_visited[1001];
queue<int> q;

void dfs(int current) {
  dfs_visited[current] = 1;
  cout << current << " ";
  for (int next : graph[current]) {
    if (!dfs_visited[next]) {
      dfs(next);
    }
  }
}

void bfs(int current) {
  bfs_visited[current] = 1;
  q.push(current);
  while (!q.empty()) {
    current = q.front();
    q.pop();
    cout << current << " ";
    for (int next : graph[current]) {
      if (!bfs_visited[next]) {
        bfs_visited[next] = 1;
        q.push(next);
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m >> v;
  for (int i = 0; i < m; i++) {
    cin >> v1 >> v2;
    graph[v1].push_back(v2);
    graph[v2].push_back(v1);
  }
  for (int i = 1; i <= n; i++) {
    sort(graph[i].begin(), graph[i].end());
  }
  dfs(v);
  cout << "\n";
  bfs(v);
  return 0;
}
