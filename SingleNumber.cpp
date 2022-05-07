#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int singleNumber(vector<int>& nums){
   int num = 0;
   for (int i = 0; i < nums.size(); ++i) {
     cout << num << endl;
       num ^= nums[i];
   }
  return num;
}

int main(){
  vector<int> ar{1, 1, 4, 5, 2 ,4, 5};
  cout << singleNumber(ar) << endl;
  return 0;
}
