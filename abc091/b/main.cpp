#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  for (int i = 0; i < N; i++)
    cin >> s[i];

  int M;
  cin >> M;
  vector<string> t(M);
  for (int i = 0; i < M; i++)
    cin >> t[i];

  map<string, int> m;
  for (int i = 0; i < N; i++) {
    if (m.count(s[i]) == 0) {
      m.insert(make_pair(s[i], 1));
    } else {
      m[s[i]] = m[s[i]] + 1;
    }
  }
  for (int i = 0; i < M; i++) {
    if (m.count(t[i]) != 0) {
      m[t[i]] = m[t[i]] - 1;
    }
  }

  int val = 0;
  for (auto iter = m.begin(); iter != m.end(); iter++) {
    val = max(val, iter->second);
  }

  cout << val << endl;
  return 0;
}
