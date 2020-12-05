#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S[S.size()-1] == 's'){
    S += 'e';
    S += 's';
  }else
    S += 's';

  cout << S << endl;

  return 0;
}