#include <iostream>
using namespace std;

int t, n, m, dp[31][31];

void init() {
  for (int i = 0; i <= 30; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || i == j) {
        dp[i][j] = 1;
      } else {
        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  init();
  cin >> t;
  while (t--) {
    cin >> n >> m;
    cout << dp[m][n] << "\n";
  }
  return 0;
}
