#include <iostream>
#include <vector>
#include <cstddef>
#include <algorithm> // std::max

using namespace std;

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
    
    // trivial case of small triangle
    if (triangle.size() < 2) {
      cout << triangle[0][0] << endl;
      continue;
    }
    // ok guess we have to calculate the sum
    for (size_t r = triangle.size()-2; r > 0; --r) {
      for (size_t i = 0; i < triangle[r].size(); ++i)
        triangle[r][i] += max(triangle[r+1][i], triangle[r+1][i+1]);
    }
    
    // last round
    triangle[0][0] += max(triangle[1][0], triangle[1][1]);
    
    cout << triangle[0][0] << endl;
  }
  
  return 0;
}