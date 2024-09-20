#include <iostream>
using namespace std;

int h, m;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> h >> m;
  if (m >= 45) {
    m -= 45;
  } else {
    h--;
    if (h < 0) h += 24;
    m += 15;
  }
  cout << h << " " << m;
  return 0;
}
