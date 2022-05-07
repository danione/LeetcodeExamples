#include <iostream>
using namespace std;

int getSum(int a, int b) {
  while (b != 0) {
      int carry = a & b;
      a = a ^ b;
      b = carry << 1;
  }
  return a;
}

int main(){
  cout << getSum(-1, 0) << endl;
  return 0;
}
