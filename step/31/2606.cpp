#include <iostream>
#include <vector>
using namespace std;

int n, pair_n, c1, c2;
vector<int> graph[101];
int visited[101];
int cnt;

void dfs(int current) {
  visited[current] = 1;
  cnt++;
  for (int next : graph[current]) {
    if (!visited[next]) {
      dfs(next);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> pair_n;
  for (int i = 0; i < pair_n; i++) {
    cin >> c1 >> c2;
    graph[c1].push_back(c2);
    graph[c2].push_back(c1);
  }
  dfs(1);
  cout << cnt - 1;
  return 0;
}
