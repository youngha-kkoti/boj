#include <algorithm>
#include <iostream>
using namespace std;

struct Point {
  int x;
  int y;
};

Point p1, p2, p3;

int ccw(Point p1, Point p2, Point p3) {
  // Vector P1P2 = (x2 - x1, y2 - y1)
  // Vector P2P3 = (x3 - x2, y3 - y2)
  int cross_product =
      (p2.x - p1.x) * (p3.y - p2.y) - (p2.y - p1.y) * (p3.x - p2.x);

  if (cross_product > 0) {
    return 1;
  } else if (cross_product < 0) {
    return -1;
  } else {
    return 0;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> p1.x >> p1.y;
  cin >> p2.x >> p2.y;
  cin >> p3.x >> p3.y;
  cout << ccw(p1, p2, p3);
  return 0;
}
