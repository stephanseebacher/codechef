#include <iostream>
#include <algorithm> // std::min

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, n, a, b, smpair;
  cin >> t;
  
  while (t--) {
    cin >> n >> a >> b;
    smpair = a + b;
    n -= 2;
    while (n--) {
      cin >> a;
      smpair = min(smpair, a+b);
      b = a;
    }
    cout << smpair << endl;
  }
  
  return 0;
}