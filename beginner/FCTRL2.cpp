//#include <iostream>
#include <vector>
#include <cstddef> // size_t
#include <iterator>
#include <cstdio> // scanf, printf
 
using namespace std;

typedef vector<int> vi;
typedef vector<vector<int> > vvi;

#define RANGE 10000

// print function
//  the number is stored in a vector with the 0th position being the least 
//  significant 'bits' -> go from last to first and concatenate to print
//  the correct output
void print(const vi &v) {
  for (vi::const_reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit) {
    (rit != v.rbegin()) ? printf("%04d", *rit) : printf("%d", *rit);
  }
  printf("\n");
}

// calculate the factorial numbers
//  general idea: 
//   https://blog.codechef.com/2009/07/02/tutorial-for-small-factorials/
//  optimization: store all calculated numbers, calculate only when needed
void fac(vvi &f, size_t n) {  
  for (size_t highest = f.size(); highest < n; ++highest) {
    vi current;
    const int prev = highest-1;
    int carry = 0;
    for (vi::iterator it = f[prev].begin(); it != f[prev].end(); ++it) {
      int next = *it * (highest+1) + carry;
      carry = next / RANGE;
      current.push_back(next % RANGE);
    }
    while (carry) {
      current.push_back(carry % RANGE);
      carry = carry / RANGE;
    }
    f.push_back(current);
  }
}
 
int main() {
  // change buffer settings
  setlinebuf(stdout);
  
  size_t t, n;
  scanf("%zu", &t);
  
  vvi factorials;
  // we have to start with something...
  vi first{1};
  factorials.push_back(first); // 1!
  
  while (t--) {
    scanf("%zu", &n);
    if (n > factorials.size()) fac(factorials, n);
    print(factorials[n-1]);
  }
  return 0;
}