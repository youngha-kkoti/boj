#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int n, a[25][25], visited[25][25], complex_cnt, house_cnt;
vector<int> v;

void dfs(int y, int x, int& house_cnt) {
  visited[y][x] = 1;
  house_cnt++;
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
    if (a[ny][nx] == 1 && !visited[ny][nx]) {
      dfs(ny, nx, house_cnt);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++) {
      a[i][j] = s[j] - '0';
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] == 1 && !visited[i][j]) {
        house_cnt = 0;
        dfs(i, j, house_cnt);
        complex_cnt++;
        v.push_back(house_cnt);
      }
    }
  }
  sort(v.begin(), v.end());
  cout << complex_cnt << "\n";
  for (int i : v) {
    cout << i << "\n";
  }
  return 0;
}
