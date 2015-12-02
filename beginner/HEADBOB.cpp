#include <iostream>
#include <string>
#include <cstddef> // size_t

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, n;
  cin >> t;
  
  string str;
  size_t found;
  
  while (t--) {
    cin >> n >> str;
    found = str.find_first_of('I');
    if (found != string::npos) {
      cout << "INDIAN" << endl;
      continue;
    }
    
    found = str.find_first_of('Y');
    if (found != string::npos) {
      cout << "NOT INDIAN" << endl;
      continue;
    }
    
    cout << "NOT SURE" << endl;
    
  }
  
  return 0;
}