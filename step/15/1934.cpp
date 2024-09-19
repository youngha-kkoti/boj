#include <iostream>
using namespace std;

int t, a, b;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> t;
  while (t--) {
    cin >> a >> b;
    cout << lcm(a, b) << "\n";
  }
  return 0;
}
