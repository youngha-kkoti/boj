#include <algorithm>
#include <iostream>
using namespace std;

int n, a[1000][3], dp[1000][3];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // INPUT
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i][0] >> a[i][1] >> a[i][2];
  }

  // DP
  for (int i = 0; i < 3; i++) {
    dp[0][i] = a[0][i];
  }
  for (int i = 1; i < n; i++) {
    dp[i][0] = min(dp[i - 1][1] + a[i][0], dp[i - 1][2] + a[i][0]);
    dp[i][1] = min(dp[i - 1][0] + a[i][1], dp[i - 1][2] + a[i][1]);
    dp[i][2] = min(dp[i - 1][0] + a[i][2], dp[i - 1][1] + a[i][2]);
  }

  // OUTPUT
  cout << min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});

  return 0;
}
