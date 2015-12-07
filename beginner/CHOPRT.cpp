#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, a, b;
  cin >> t;
  
  while (t--) {
    cin >> a >> b;
    if (a < b) cout << '<';
    else if (b < a) cout << '>';
    else cout << '=';
    cout << endl;
  }
  
  return 0;
}