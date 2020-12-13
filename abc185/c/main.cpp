#include <iostream>
using namespace std;

long long calcNumOfCombination(int n, int r) {
  long long num = 1;
  for (int i = 1; i <= r; i++) {
    num = num * (n - i + 1) / i;
  }
  return num;
}

int main() {
  int L;
  cin >> L;

  int r = 11;
  long long val = calcNumOfCombination(L - 1, r);

  cout << val << endl;
  return 0;
}
