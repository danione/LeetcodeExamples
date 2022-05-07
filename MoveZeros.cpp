#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& nums){
  int last = 0, cur = 0;
  while(cur < nums.size()) {
    if(nums[cur] != 0) {
      swap(nums[last], nums[cur]);
      last++;
    }
    cur++;
  }
}

int main(){
  vector<int> nums {0, 1, 0, 3, 12};
  moveZeros(nums);
  for(int i = 0; i < nums.size(); i++)
    cout << nums[i];
  return 0;
}
