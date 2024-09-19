#include <iostream>
using namespace std;

int a, b, c, d, e;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> a >> b;
  c = a * (to_string(b)[2] - '0');
  d = a * (to_string(b)[1] - '0');
  e = a * (to_string(b)[0] - '0');
  cout << c << "\n";
  cout << d << "\n";
  cout << e << "\n";
  cout << 100 * e + 10 * d + 1 * c << "\n";
  return 0;
}
