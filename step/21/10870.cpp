#include <iostream>
using namespace std;

int n;

long long fibonacci(long long n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  cout << fibonacci(n);
  return 0;
}
