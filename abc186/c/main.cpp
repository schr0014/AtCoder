#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int val = N;

  int j_max = 7 * 7 * 7 * 7 * 7 * 7;
  int i10;
  int i08;
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= 6; j++) {
      i10 = i;
      i08 = i;
      i10 = i10 / int(pow(10, j));
      if (i10 % 10 == 7) {
        val--;
        break;
      }

      i08 = i08 / int(pow(8, j));
      if (i08 % 8 == 7) {
        val--;
        break;
      }
    }
  }

  cout << val << endl;
  return 0;
}