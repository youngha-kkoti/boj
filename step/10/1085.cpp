#include <algorithm>
#include <iostream>
using namespace std;

int x, y, w, h;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> x >> y >> w >> h;
  cout << min({x, y, w - x, h - y});
  return 0;
}
