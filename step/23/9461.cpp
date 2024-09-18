#include <iostream>
using namespace std;

int t, n;
long long dp[101] = {
    0, 1, 1, 1, 2, 2,
};

void dp_init() {
  for (int i = 6; i <= 100; i++) {
    dp[i] = dp[i - 5] + dp[i - 1];
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  dp_init();
  cin >> t;
  while (t--) {
    cin >> n;
    cout << dp[n] << "\n";
  }
  return 0;
}
