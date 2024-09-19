#include <iostream>
#include <queue>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int n, m;
int a[100][100], visited[100][100];
queue<pair<int, int>> q;

void input() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++) {
      a[i][j] = s[j] - '0';
    }
  }
}

void bfs(int y, int x) {
  visited[y][x] = 1;
  q.push({y, x});

  while (!q.empty()) {
    auto [y, x] = q.front();
    q.pop();

    for (int i = 0; i < 4; i++) {
      int ny = y + dy[i];
      int nx = x + dx[i];

      if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
      if (a[ny][nx] == 1 && !visited[ny][nx]) {
        visited[ny][nx] = visited[y][x] + 1;
        q.push({ny, nx});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  input();
  bfs(0, 0);
  cout << visited[n - 1][m - 1];
  return 0;
}
