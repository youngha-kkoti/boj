#include <iostream>
using namespace std;

int a, b;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> a >> b;
  cout.precision(10);
  cout << (double)a / b;
  return 0;
}
