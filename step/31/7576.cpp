#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int m, n;
int a[1000][1000];
queue<pair<int, int>> q;

void input() {
  cin >> m >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      if (a[i][j] == 1) {
        q.push({i, j});
      }
    }
  }
}

void bfs() {
  while (!q.empty()) {
    int y = q.front().first;
    int x = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++) {
      int ny = y + dy[i];
      int nx = x + dx[i];
      if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
      if (a[ny][nx]) continue;
      a[ny][nx] = a[y][x] + 1;
      q.push({ny, nx});
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  input();
  bfs();
  int day = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      day = max(day, a[i][j]);
      if (a[i][j] == 0) {
        cout << -1;
        return 0;
      }
    }
  }
  cout << day - 1;

  return 0;
}
