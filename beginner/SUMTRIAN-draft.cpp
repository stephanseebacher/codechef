#include <iostream>

int main() {
  ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;
  
  while (t--) {
    int rows;
    cin >> rows;
    
    vector<vector<int> > triangle;
    
    // read input
    for (int i = 1; i <= rows; ++i) {
      vector<int> row(i);
      for (int j = 0; j < i; ++j)
        cin >> row[j];
      triangle.push_back(row);
    }
    
    // calculate max sum
    for (int r = rows-1; r >= 0; --r) {
        
    }
  }
  
  return 0;
}