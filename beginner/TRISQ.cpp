#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, b, n;
  cin >> t;
  
  while (t--) {
    cin >> b;
    n = ((b - 2) >> 1);
    cout << ((n * (n + 1)) >> 1) << endl;
  }
  
  return 0;
}