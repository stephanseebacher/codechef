#include <iostream>
#include <vector>
#include <cstddef> // size_t
 
using namespace std;

typedef vector<int> vi;
typedef vector<vector<int> > vvi;

#define RANGE 100

vvi factorials;
int highest;

// general idea:
// https://blog.codechef.com/2009/07/02/tutorial-for-small-factorials/
void fac(int n) {  
  
  for (; highest <= n; ++highest) {
    vi current;
    //const int curr = highest-1;
    const int prev = highest-2;
    int carry = 0;
    for (vi::iterator it = factorials[prev].begin(); it != factorials[prev].end(); ++it) {
      int next = *it * (highest+1) + carry;
      cout << "next: " << next << endl;
      carry = next / RANGE;
      current.push_back(next % RANGE);
      //*it = next % RANGE;
    }
    while (carry) {
      current.push_back(carry % RANGE);
      //factorials[curr].push_back(carry % RANGE);
      carry = carry / RANGE;
    }
    factorials.push_back(current);
  }
}

void print(int n) {
  for (vi::reverse_iterator rit = factorials[n-1].rbegin(); rit != factorials[n-1].rend(); ++rit) {
    (rit != factorials[n-1].rbegin() && *rit < 10) ? cout << 0 << *rit : cout << *rit;
  }
  cout << endl;
}
 
int main() {
  ios::sync_with_stdio(false);
  
  int t, n;
  cin >> t;
  
  // we have to start with something...
  vi first{1};
  factorials.push_back(first); // 1!
  highest = 1;
  
  while (t--) {
    cin >> n;
    if (n > highest) fac(n);
    print(n);
  }
  return 0;
}