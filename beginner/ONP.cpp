#include <iostream>
#include <string>
#include <stack>

using namespace std;

// https://en.wikipedia.org/wiki/Shunting-yard_algorithm

int main() {
  int t;
  cin >> t;
  cin.ignore(1, '\n');
  
  stack<char> op; // operator stack
  
  while (t--) {
    char c;
    string out; // output string
    
    while (cin.get(c) && c != '\n') {
      switch (c) {
        case '+':
        case '-':
          while (!op.empty() && op.top() != '(') {
            out.push_back(op.top());
            op.pop();
          }
          op.push(c);
          break;
        case '*':
        case '/':
          while (!op.empty() && op.top() != '(') {
            if (op.top() != '+' && op.top() != '-') {
              out.push_back(op.top());
              op.pop();
            }
          }
        case '^':
        case '(':
          op.push(c);
          break;
        case ')':
          while (op.top() != '(') {
            out.push_back(op.top());
            op.pop();
          }
          op.pop();
          break;
        default: // a variable
          out.push_back(c);
      }
    }
    cout << out << endl;
  }
  return 0;
}