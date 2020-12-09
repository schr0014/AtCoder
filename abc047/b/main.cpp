#include <iostream>
#include <vector>
using namespace std;
#include <map>

int main() {
  int W, H, N;
  cin >> W >> H >> N;

  vector<int> x(N);
  vector<int> y(N);
  vector<int> a(N);
  for (int i = 0; i < N; i++)
    cin >> x[i] >> y[i] >> a[i];

  int start_x = 0;
  int start_y = 0;
  int end_x = W;
  int end_y = H;
  for (int i = 0; i < N; i++) {
    switch (a[i]) {
    case 1:
      start_x = max(start_x, x[i]);
      break;
    case 2:
      end_x = min(end_x, x[i]);
      break;
    case 3:
      start_y = max(start_y, y[i]);
      break;
    case 4:
      end_y = min(end_y, y[i]);
      break;
    default:
      cout << "error" << endl;
    }
  }

  int w = max(end_x - start_x, 0);
  int h = max(end_y - start_y, 0);

  cout << w * h << endl;
  return 0;
}
