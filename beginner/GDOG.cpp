#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, n, k, c;
  cin >> t;
  
  while (t--) {
    cin >> n >> k;
    c = n % k;
    for (; k >= 2; --k)
      c = max(c, n % k);
    
    cout << c << endl;
  }
  
  return 0;
}