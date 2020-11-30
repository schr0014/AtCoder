#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  string s;
  cin >> s;

  for (int i = 0; i < N; i++) {
    if (s[i] == 'o')
      X++;
    else if (s[i] == 'x' && X > 0)
      X--;
  }

  cout << X << endl;

  return 0;
}
