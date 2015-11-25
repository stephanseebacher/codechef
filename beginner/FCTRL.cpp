#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    double n;
    cin >> n;
    
    // idea from: https://en.wikipedia.org/wiki/Trailing_zero#Factorial
    int zeros = 0;
    int k = ilogb(n) + 1;
    for (int i = 1; i <= k; ++i) {
      zeros += floor(n/pow(5, i));
    }
    cout << zeros << endl;
  }
  return 0;
}
