#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    
    int n, k;
    cin >> n >> k;
    
    int o = 0;
    while (n > 0) {
        int t;
        cin >> t;
        if (!(t % k)) ++o;
        --n;
    }
    
    cout << o << endl;
  return 0;
}
