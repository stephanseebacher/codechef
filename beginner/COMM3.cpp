#include <iostream>
#include <cmath> // std::pow, std::sqrt

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;
  
  double range, chef_x, chef_y, head_x, head_y, sous_x, sous_y;
  int to_far_counter;
  
  while(t--) {
    cin >> range >> chef_x >> chef_y >> head_x >> head_y >> sous_x >> sous_y;
    
    to_far_counter = 0;
    // we calculate the euclidean distance and check if it is greater than the
    // range of two transceivers. 
    // bool to int conversion is implicit (§4.7/4 C++ Standard)
    to_far_counter += (sqrt(pow(head_x - chef_x, 2) + pow(head_y - chef_y, 2))) > range;
    to_far_counter += (sqrt(pow(sous_x - head_x, 2) + pow(sous_y - head_y, 2))) > range;
    to_far_counter += (sqrt(pow(chef_x - sous_x, 2) + pow(chef_y - sous_y, 2))) > range;
    
    (to_far_counter > 1) ? cout << "no" : cout << "yes";
    cout << endl;
  }

  return 0;
}