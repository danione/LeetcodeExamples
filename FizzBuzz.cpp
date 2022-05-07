#include <iostream>
#include <string>
#include <vector>
using namespace std;

string division(int counter){
  bool divBy3 = false;
  bool divBy5 = false;
  if(counter % 3 == 0)
    divBy3 = true;
  if(counter % 5 == 0)
    divBy5 = true;

  if(divBy3 && divBy5)
    return "FizzBuzz";
  else if(divBy3)
    return "Fizz";
  else if(divBy5)
    return "Buzz";
  else
    return to_string(counter);
}

void fizzBuzz(vector<string>& str, int n){
  int counter = 1;
  while(counter <= n){
    str.push_back(division(counter));
    counter++;
  }
}

int main(){
  int n = 3;
  vector<string> str;
  fizzBuzz(str, n);
  for(int i = 0; i < str.size(); i++){
    cout << str[i] << endl;
  }
  return 0;
}
