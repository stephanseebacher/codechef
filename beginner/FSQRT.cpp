#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, n;
  cin >> t;
  
  while (t--) {
    cin >> n;
    cout << (int)sqrt(n) << endl;
  }
  
  return 0;
}