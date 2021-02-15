#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> arr;

  if(n % 2 != 0) {
    for(int i = 1; i <= n; i += 2) {
      arr.push_back(i);
    }
    for(int j = 2; j < n; j+= 2) {
      arr.push_back(j);
    }
  }
  
  else {
    for(int i = 1; i < n; i += 2) {
      arr.push_back(i);
    }
    for(int j = 2; j <= n; j += 2 ) {
      arr.push_back(j);
    }
  }
  if(k == 0) {
    cout << arr[0];
  }
  else {
    cout << arr[k - 1];
  }
}