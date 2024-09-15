#include <iostream>
using namespace std;

int n, k;
int dp[11][11];

void init() {
  for (int i = 0; i <= 10; i++) {
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
  cin >> n >> k;
  cout << dp[n][k];
  return 0;
}
