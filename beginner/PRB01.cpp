#include <iostream>
#include <cmath> // sqrt

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, n, lim;
  cin >> t;
  
  bool is_prime;
  
  while (t--) {
    cin >> n;
    is_prime = true;
    if (!(n & 1) && n > 2) {
      is_prime = false;
    } else {
      lim = (int)sqrt(n);
      for (int i = 3; i <= lim; ++i) {
        if (!(n % i))  is_prime = false;
      }
    }
    is_prime ? cout << "yes" : cout << "no";
    cout << endl;
  }
  
  return 0;
}