#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;
  
  string n;
  bool win;
  while (t--) {
    cin >> n;
    win = true;
    
    for (size_t i = 0; i < n.size(); ++i) {
      if (n[i] != n[n.size()-1-i]) {
        win = false;
        break;
      }
    }

    win ? cout << "wins" : cout << "losses";
    cout << endl;
  }
  
  return 0;
}