#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  v.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  cout << v.front() * v.back();
  return 0;
}
