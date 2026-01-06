#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> TwoSum(vector<int> &nums, int target)
{
  vector<int> ans1;
  int n = nums.size();
  int st = 0, end = n - 1;
  while (st < end)
  {
    int sum = nums[st] + nums[end];
    if (sum > target)
    {
      end--;
    }
    else if (sum < target)
    {
      st++;
    }
    else
    {
      ans1.push_back(st);
      ans1.push_back(end);
    }
    return ans1;
  }
}
int main()
{

  // vector<int> arr = {6, 8, 0, 1, -1};
  // stack<int> s;
  // vector<int> ans(arr.size(), 0);
  // for (int i = arr.size() - 1; i >= 0; i--)
  // {
  //   while (s.size() > 0 && s.top() <= arr[i])
  //   {
  //     s.pop();
  //   }
  //   if (s.empty())
  //   {
  //     ans[i] = -1;
  //   }
  //   else
  //   {
  //     ans[i] = s.top();
  //   }
  //   s.push(arr[i]);
  // }
  // for (int val : ans)
  // {
  //   cout << val << " ";
  // }
  vector<int> nums = {1, 2, 0, 4, -3};
  int target = 3;
  vector<int> ans1 = TwoSum(nums, target);
  cout << ans1[0] << " " << ans1[1];
  cout << endl;
  return 0;
}
