#include <iostream>
#include <cmath> // std::pow, std::sqrt

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;
  
  double b, bsqr, ls, lssqr;
  
  while(t--) {
    cin >> b >> ls;
    bsqr = pow(b, 2);
    lssqr = pow(ls, 2);
    
    cout << sqrt(lssqr - bsqr) << " " << sqrt(bsqr + lssqr) << endl;
  }

  return 0;
}