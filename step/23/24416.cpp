#include <iostream>
using namespace std;

int f[41], cnt1, cnt2, n;

int fib(int n) {
  if (n == 1 || n == 2) {
    cnt1++;
    return 1;
  }
  return fib(n - 2) + fib(n - 1);
}

int fibonacci(int n) {
  f[1] = f[2] = 1;
  for (int i = 3; i <= n; i++) {
    cnt2++;
    f[i] = f[i - 2] + f[i - 2];
  }
  return f[n];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  fib(n);
  fibonacci(n);
  cout << cnt1 << " " << cnt2;
  return 0;
}
