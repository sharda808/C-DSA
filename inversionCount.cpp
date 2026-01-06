#include <iostream>
#include <vector>
using namespace std;
int Count(vector<int> nums)
{
  int count = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (nums[i] > nums[j])
      {
        count++;
      }
    }
  }
  return count;
}
int main()
{
  vector<int> nums = {6, 3, 5, 2, 7};
  cout << "count is:" << Count(nums) << endl;
  return 0;
}