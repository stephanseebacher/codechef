#include <iostream>
#include <algorithm> // std::max
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, a, b;
  cin >> t;
  
  while(t--) {
    cin >> a >> b;
    cout << max(a, b) << " " << a + b << endl;
  }

  return 0;
}