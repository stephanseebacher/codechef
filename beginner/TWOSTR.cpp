#include <iostream> // cin, cout
#include <string>   // string
#include <cstddef>  // size_t

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;
  
  string x, y;
  
  while (t--) {
    cin >> x >> y;
    size_t pos = 0;
    for (; pos < x.size(); ++pos)
      if (x[pos] != y[pos] && x[pos] != '?' && y[pos] != '?')
        break;
    
    (pos == x.size()) ? cout << "Yes" : cout << "No";
    cout << endl;
  }
  
  return 0;
}