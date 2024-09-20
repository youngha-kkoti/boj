#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

int TC, board_size, current_y, current_x, target_y, target_x;
int board[300][300], visited[300][300];
queue<pair<int, int>> q;

void tc_init() {
  memset(visited, 0, sizeof(visited));
  q = queue<pair<int, int>>();
}

void bfs(int y, int x) {
  visited[y][x] = 1;
  q.push({y, x});

  while (!q.empty()) {
    auto [y, x] = q.front();
    q.pop();

    if (y == target_y && x == target_x) break;

    for (int i = 0; i < 8; i++) {
      int ny = y + dy[i];
      int nx = x + dx[i];
      if (ny < 0 || ny >= board_size || nx < 0 || nx >= board_size) continue;
      if (!visited[ny][nx]) {
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
  cin >> TC;
  while (TC--) {
    tc_init();
    cin >> board_size >> current_y >> current_x >> target_y >> target_x;
    bfs(current_y, current_x);
    cout << visited[target_y][target_x] - 1 << "\n";
  }
  return 0;
}
