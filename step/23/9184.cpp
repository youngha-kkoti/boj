#include <iostream>
using namespace std;

int a, b, c;
int memo[51][51][51];

int w(int a, int b, int c) {
  if (a <= 0 || b <= 0 || c <= 0) {
    return 1;
  }
  if (a > 20 || b > 20 || c > 20) {
    return w(20, 20, 20);
  }
  if (memo[a][b][c]) {
    return memo[a][b][c];
  }
  if (a < b && b < c) {
    memo[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    return memo[a][b][c];
  }
  memo[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) -
                  w(a - 1, b - 1, c - 1);
  return memo[a][b][c];
}

void fPrint(int a, int b, int c, int result) {
  printf("w(%d, %d, %d) = %d\n", a, b, c, result);
}

int main() {
  // ios::sync_with_stdio(0);
  // cin.tie(0);
  // cout.tie(0);
  while (1) {
    cin >> a >> b >> c;
    if (a == -1 && b == -1 && c == -1) {
      break;
    }
    fPrint(a, b, c, w(a, b, c));
  }
  return 0;
}
