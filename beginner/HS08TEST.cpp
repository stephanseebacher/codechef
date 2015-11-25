#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int withdraw;
    float balance;
    float new_balance;
    
    cin >> withdraw;
    cin >> balance;
    
    new_balance = balance;
    
    if (withdraw % 5 == 0 && withdraw > 0 && withdraw <= 2000 && withdraw <= (balance-0.5))
      new_balance -= float(withdraw) + 0.5f;
    
    printf("%.2f\n", new_balance);
  return 0;
}
