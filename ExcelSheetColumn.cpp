#include <iostream>
#include <cmath>
using namespace std;



int main(){
  string a = "ZY";
  int column = 0;
  for(int i = a.size() - 1; i >= 0; i--){
    column += column * 26 + (a[i] - 'A' + 1);
  }
  cout << column << endl;
  return 0;
}
