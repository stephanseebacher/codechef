#include <iostream>
#include <string>
#include <algorithm>
#include <cstddef>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;
  
  string s;
  while (cin >> s) {
    sort(s.begin(), s.end());
    bool satisfies = false;
    if (!(s.size() & 1)) { // if size is even
      size_t num_of_occurences = (s.size() / 2) - 1;

      size_t first = 0;
      size_t last = s.find_last_of(s[first]);
      while (first <= num_of_occurences+1 && first != string::npos) {
        if (last - first == num_of_occurences) {
          satisfies = true;
          break;
        } else {
          first = last+1;
          last = s.find_last_of(s[first]);
        }  
      }
    }
    satisfies ? cout << "YES" : cout << "NO";
    cout << endl;
  }
  
  return 0;
}