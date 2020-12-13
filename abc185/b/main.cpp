#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N, M, T;
  cin >> N >> M >> T;

  vector<int> A(M);
  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
  }

  string ans = "Yes";

  int current = N;
  int time = 0;
  for (int i = 0; i < M; i++) {
    if (current - (A[i] - time) <= 0) {
      ans = "No";
      break;

    } else {
      current = current - (A[i] - time) + (B[i] - A[i]);
      current = min(current, N);
      time = B[i];
    }
  }

  if (ans == "Yes" && current - (T - time) <= 0) {
    ans = "No";
  }

  cout << ans << endl;
  return 0;
}
