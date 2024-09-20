#include <algorithm>
#include <iostream>
using namespace std;

string s;
int i;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> s >> i;
  cout << s[i - 1];
  return 0;
}
