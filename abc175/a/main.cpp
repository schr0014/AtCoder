#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  int count = 0;
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == 'R')
      count++;
  }
  if (count == 2 && s[1] == 'S')
    count = 1;

  cout << count << endl;
  return 0;
}
