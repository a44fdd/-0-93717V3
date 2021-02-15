#include <iostream>
using namespace std;
 
int main() {
 
  int a, b;
  int Y = 0;
 
  cin >> a >> b;
  while (a <= b) {
 
    a *= 3;
    b *= 2;
    Y += 1;
  }
 
  cout << Y << endl; 
}