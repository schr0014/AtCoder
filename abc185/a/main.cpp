#include <iostream>
using namespace std;

int main() {
  int A1, A2, A3, A4;
  cin >> A1 >> A2 >> A3 >> A4;

  int val = 100;
  val = min(val, A1);
  val = min(val, A2);
  val = min(val, A3);
  val = min(val, A4);

  cout << val << endl;
  return 0;
}
