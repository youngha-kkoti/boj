#include <iostream>
using namespace std;

int n;

long long factorial(long long n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  cout << factorial(n);
  return 0;
}
