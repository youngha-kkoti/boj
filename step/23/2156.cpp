#include <algorithm>
#include <iostream>
using namespace std;

int n, a[10001], dp[10001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i + 1];
  dp[1] = a[1];
  dp[2] = a[1] + a[2];
  for (int i = 3; i <= n; i++) {
    dp[i] = max({dp[i - 1], dp[i - 3] + a[i - 1] + a[i], dp[i - 2] + a[i]});
  }
  cout << dp[n];
  return 0;
}
