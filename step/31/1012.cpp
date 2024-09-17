#include <iostream>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int t, m, n, k, x, y, cnt;
int a[50][50], visited[50][50];

void tc_init() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      a[i][j] = 0;
      visited[i][j] = 0;
    }
  }
  cnt = 0;
}

void input() {
  cin >> m >> n >> k;
  for (int i = 0; i < k; i++) {
    cin >> x >> y;
    a[y][x] = 1;
  }
}

void dfs(int y, int x) {
  visited[y][x] = 1;
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
    if (a[ny][nx] == 1 && !visited[ny][nx]) {
      dfs(ny, nx);
    }
  }
}

void solve() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 1 && !visited[i][j]) {
        dfs(i, j);
        cnt++;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> t;
  while (t--) {
    tc_init();
    input();
    solve();
    cout << cnt << "\n";
  }
  return 0;
}
