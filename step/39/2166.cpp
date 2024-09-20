#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int n;
struct Point {
  double x;
  double y;
};
Point points[10000];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> points[i].x >> points[i].y;
  }

  // Apply Shoelace formula
  double area = 0;
  for (int i = 0; i < n; i++) {
    int j = (i + 1) % n;
    area += points[i].x * points[j].y - points[j].x * points[i].y;
  }

  // Take absolute value and divide by 2 for the final area
  area = fabs(area) / 2.0;

  cout << fixed;
  cout.precision(1);
  cout << area;

  return 0;
}
