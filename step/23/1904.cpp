#include <iostream>
using namespace std;

int n, dp[1000001];

void dp_init() {
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= 1000000; i++) {
    dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  dp_init();
  cin >> n;
  cout << dp[n];
  return 0;
}
