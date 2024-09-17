#include <iostream>
#include <stack>
using namespace std;

int n, op, x;
stack<int> stk;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> op;
    if (op == 1) {
      cin >> x;
      stk.push(x);
    } else if (op == 2) {
      if (!stk.empty()) {
        cout << stk.top() << "\n";
        stk.pop();
      } else {
        cout << -1 << "\n";
      }
    } else if (op == 3) {
      cout << stk.size() << "\n";
    } else if (op == 4) {
      if (stk.empty()) {
        cout << 1 << "\n";
      } else {
        cout << 0 << "\n";
      }
    } else if (op == 5) {
      if (!stk.empty()) {
        cout << stk.top() << "\n";
      } else {
        cout << -1 << "\n";
      }
    }
  }
  return 0;
}
