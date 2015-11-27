#include <iostream>
#include <vector>
#include <cstddef> // size_t

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int n;
  
  while (cin >> n) {
    if (!n) break;
    vector<int> perm(n);
    for (int i = 0; i < n; ++i) cin >> perm[i];
    
    size_t i = 0;
    for ( ; i < perm.size(); ++i)
      if (perm[perm[i]-1] != i+1) break;
    
    if (perm.size() != i) cout << "not ";
    cout << "ambiguous" << endl;
  }
  return 0;
}