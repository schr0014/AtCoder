#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double Sx, Sy, Gx, Gy;
  cin >> Sx >> Sy >> Gx >> Gy;

  double x;
  x = Sy / (Sy + Gy) * (Gx - Sx) + Sx;

  // memo: 本番では通ったが、VS Code 上では通らず
  //  cout << fixed << setprecision(12) << x << endl;
  printf("%.10lf\n", x);
}
