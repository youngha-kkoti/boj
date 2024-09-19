#include <iostream>
using namespace std;

long long a, b;

long long gcd(long long a, long long b) {
  while (b != 0) {
    long long temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

long long lcm(long long a, long long b) { return (a * b) / gcd(a, b); }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> a >> b;
  cout << lcm(a, b) << "\n";
  return 0;
}
