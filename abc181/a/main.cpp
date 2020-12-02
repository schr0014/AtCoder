#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;

  string val = (N % 2 == 0) ? "White" : "Black";
  cout << val << endl;

  return 0;
}
