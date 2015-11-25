#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int rounds, s, t, p1, p2, lead, curr_lead;
  p1 = 0;
  p2 = 0;
  bool p1_wins = true;
  lead = 0;
  cin >> rounds;
  
  while (rounds--) {
    cin >> s >> t;
    p1 += s;
    p2 += t;
    curr_lead = p1 - p2;
    if (p1 < p2) curr_lead *= -1;
    if (curr_lead > lead) {
      lead = curr_lead;
      p1_wins = (p1 > p2);
    }
  }
  
  (p1_wins) ? cout << "1 " : cout << "2 ";
  cout << lead << endl;
  return 0;
}