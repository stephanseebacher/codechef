#include <iostream>
#include <string>
#include <algorithm> // std::count

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;
  
  char four = '4';
  string n;
  
  while (t--) {
    cin >> n;
    cout << count(n.begin(), n.end(), four) << endl;
  }
  
  return 0;
}