#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t, p, menus;
  cin >> t;
  
  while (t--) {
    menus = 0;
    cin >> p;
    while (p > 2048) {
        menus++;
        p -= 2048;
    }
    p = p - ((p >> 1) & 0x55555555);
    p = (p & 0x33333333) + ((p >> 2) & 0x33333333);
    menus += (((p + (p >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
    cout << menus << endl;
  }
  return 0;
}