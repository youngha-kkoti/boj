#include <algorithm>
#include <iostream>
using namespace std;

int n1, d1, n2, d2;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n1 >> d1 >> n2 >> d2;
  int numerator = n1 * d2 + n2 * d1;
  int denominator = d1 * d2;
  int gcd_value = gcd(numerator, denominator);
  numerator /= gcd_value;
  denominator /= gcd_value;
  cout << numerator << " " << denominator;
  return 0;
}
