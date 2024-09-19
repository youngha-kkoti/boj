#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, a[100000];
vector<int> max_sum;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // INPUT and INIT
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  max_sum.resize(n);

  // Dynamic Programming
  max_sum[0] = a[0];
  for (int i = 1; i < n; i++) {
    max_sum[i] = max(max_sum[i - 1] + a[i], a[i]);
  }

  // OUTPUT
  cout << *max_element(max_sum.begin(), max_sum.end());

  return 0;
}
