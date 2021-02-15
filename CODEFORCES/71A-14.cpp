#include <iostream>
#include <string>
using namespace std;
 
int main() {
  int t;
  string word;
 
  cin >> t;
  for (int i = 0; i < t; i++) {
      cin >> word;
      if(word.length() > 10){
        cout << word[0] << word.length() - 2 << word[word.length() - 1] << "\n";
      }
      else{
        cout << word << "\n";
      }
        
    }
}