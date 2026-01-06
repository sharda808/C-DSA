#include <iostream>
#include <vector>
using namespace std;
int binSearch(vector<int> nums, int st, int end, int key)
{
  if (st > end)
  {
    return -1;
  }
  int mid = (st + end) / 2;
  if (nums[mid] == key)
  {
    return mid;
  }
  else if (nums[mid > key])
  {
    return (nums, st, mid - 1, key);
  }
  else
  {
    return (nums, mid + 1, end, key);
  }
}
int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  cout << "element is found " << binSearch(nums, 0, nums.size() - 1, 8) << endl;
  return 0;
}