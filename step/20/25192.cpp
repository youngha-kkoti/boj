#include <iostream>
#include <set>
using namespace std;

int n, cnt;
string s;
set<string> gomgom;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "ENTER") {
      cnt += gomgom.size();
      gomgom.clear();
    } else {
      gomgom.insert(s);
    }
  }
  cnt += gomgom.size();
  cout << cnt;
  return 0;
}
