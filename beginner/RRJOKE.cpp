#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, n, x_dump, y_dump, result;
  cin >> t;
  
  while (t--) {
    cin >> n;
    result = 0;
    
    for (int i = 1; i <= n; ++i) {
      cin >> x_dump >> y_dump;
      result ^= i;
    }
    
    cout << result << endl;
  }
  
  return 0;
}