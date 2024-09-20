#include <algorithm>
#include <iostream>
using namespace std;

int t;
string s;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> t;
  while (t--) {
    cin >> s;
    cout << s[0] << s[s.length() - 1] << "\n";
  }
  return 0;
}
