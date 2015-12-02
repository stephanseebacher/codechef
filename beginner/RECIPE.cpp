#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<int>::iterator vi_it;

// eulers algorithm
// subtraction-based version
int gcd(int a, int b) {
  while (a != b) (a > b) ? a -= b : b -= a;
  return a;
}

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, n, x;
  cin >> t;
  
  while (t--) {
    cin >> n;
    vi ingredients(n);
    cin >> ingredients[0];
    cin >> ingredients[1];
    x = gcd(ingredients[0], ingredients[1]);
    
    for (int i = 2; i < n; ++i) {
      cin >> ingredients[i];
      x = gcd(x, ingredients[i]);
    }
    
    for (vi_it it = ingredients.begin(); it != ingredients.end(); ++it)
      cout << *it / x << " ";
    cout << endl;
  }
  return 0;
}