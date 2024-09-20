#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

int k;
stack<int> stk;

int get_stack_sum() {
  int sum = 0;
  while (!stk.empty()) {
    sum += stk.top();
    stk.pop();
  }
  return sum;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> k;
  for (int i = 0; i < k; i++) {
    int n;
    cin >> n;
    if (n == 0) {
      stk.pop();
    } else {
      stk.push(n);
    }
  }
  cout << get_stack_sum();
  return 0;
}
