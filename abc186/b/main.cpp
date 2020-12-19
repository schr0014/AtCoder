#include <iostream>
#include <vector>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<int>> A(H, vector<int> (W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int min_val = 100;
  int sum = 0;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      min_val = min(min_val, A.at(i).at(j));
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      sum += A.at(i).at(j) - min_val;
    }
  }

  cout << sum << endl;
  return 0;
}
