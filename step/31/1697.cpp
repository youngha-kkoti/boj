#include <iostream>
#include <queue>
using namespace std;

int n, k;
int visited[200001];
queue<int> q;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> k;

  visited[n] = 1;
  q.push(n);

  while (!q.empty()) {
    int current = q.front();
    q.pop();

    if (current == k) break;

    for (int i = 0; i < 3; i++) {
      int next;
      if (i == 0) {
        next = current - 1;
      } else if (i == 1) {
        next = current + 1;
      } else if (i == 2) {
        next = current * 2;
      }
      if (0 <= next && next <= 200000 && !visited[next]) {
        visited[next] = visited[current] + 1;
        q.push(next);
      }
    }
  }

  cout << visited[k] - 1;

  return 0;
}
