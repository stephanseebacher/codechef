#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, min, question_marks;
  cin >> t;
  
  string s1, s2;
  
  while (t--) {
    cin >> s1 >> s2;
    min = question_marks = 0;
    for (size_t pos = 0; pos < s1.size(); ++pos) {
      if (s1[pos] == '?' || s2[pos] == '?') ++question_marks;
      else if (s1[pos] != s2[pos]) ++min;
    }
    cout << min << " " << min + question_marks << endl;
  }
  
  return 0;
}