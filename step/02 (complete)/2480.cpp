#include <algorithm>
#include <iostream>
using namespace std;

int a, b, c, ret;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> a >> b >> c;
  if (a == b && b == c) {
    ret = 10000 + a * 1000;
  } else if (a == b || a == c || b == c) {
    if (a == b || a == c) {
      ret = 1000 + a * 100;
    } else if (b == c) {
      ret = 1000 + b * 100;
    }
  } else {
    ret = max({a, b, c}) * 100;
  }
  cout << ret;
  return 0;
}
