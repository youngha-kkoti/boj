#include <iostream>
using namespace std;

int n, a[500][500], dp[500][500];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // INPUT
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> a[i][j];
    }
  }

  // DP
  dp[0][0] = a[0][0];
  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0) {
        dp[i][j] = dp[i - 1][j] + a[i][j];
      } else if (j == i) {
        dp[i][j] = dp[i - 1][j - 1] + a[i][j];
      } else {
        dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
      }
    }
  }

  // OUTPUT
  int answer = -1;
  for (int j = 0; j < n; j++) {
    answer = max(answer, dp[n - 1][j]);
  }
  cout << answer;

  return 0;
}
