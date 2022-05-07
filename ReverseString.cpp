#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<char>& given){
  for(int i = 0; i < given.size()/2; i++){
    swap(given[i], given[given.size() - 1 - i]);
  }
}

int main(){
  vector<char> given{'a','b','c'};
  reverse(given);
  return 0;
}
