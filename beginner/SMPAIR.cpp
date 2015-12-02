#include <iostream>
#include <vector>
#include <algorithm> // std::sort

using namespace std;
typedef vector<int> vi;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, n;
  cin >> t;
  
  while (t--) {
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];
    
    sort(a.begin(), a.end());
    cout << a[0] + a[1] << endl;
  }
  
  return 0;
}