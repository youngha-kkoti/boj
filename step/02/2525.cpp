#include <iostream>
using namespace std;

int a, b, c;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> a >> b >> c;
  b += c;
  a += b / 60;
  b %= 60;
  a %= 24;
  cout << a << " " << b;
  return 0;
}
