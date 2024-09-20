#include <algorithm>
#include <iostream>
using namespace std;

int n, dp[1000001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  dp[1] = 0;
  for (int i = 2; i <= 1000000; i++) {
    dp[i] = dp[i - 1] + 1;
    if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
  }
  cin >> n;
  cout << dp[n];
  return 0;
}
