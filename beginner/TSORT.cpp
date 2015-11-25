#include <iostream>
#include <vector>
#include <algorithm> // sort

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, n;
  cin >> t;
  
  vector<int> v(t);
  
  for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    cin >> *it;
  
  sort(v.begin(), v.end());
  
  for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
    cout << *it << endl;
    
  return 0;
}