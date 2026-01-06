#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
// Brute Force APProach
// vector<int> TwoSum(vector<int> &nums, int target)
// {
//   vector<int> ans;
//   int n = nums.size();
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       if (nums[i] + nums[j] == target)
//       {
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;
//       }
//     }
//   }
//   return ans;
// }
// vector<int> TwoSum(vector<int> &nums, int target)
// {
//   vector<int> ans;
//   int n = nums.size();
//   sort(nums.begin(), nums.end());
//   int st = 0, end = n - 1;

//   while (st < end)
//   {
//     int sum = nums[st] + nums[end];
//     if (sum > target)
//     {
//       end--;
//     }
//     else if (sum < target)
//     {
//       st++;
//     }
//     else
//     {
//       ans.push_back(st);
//       ans.push_back(end);
//       return ans;
//     }
//   }
//   return ans;
// }
// int main()
// {
//   vector<int> nums = {5, 2, 11, 7, 1};
//   int target = 7;
//   vector<int> ans = TwoSum(nums, target);
//   cout << ans[0] << "," << ans[1] << endl;
//   return 0;
// }
vector<int> TwoSum(vector<int> &arr, int tar)
{
  unordered_map<int, int> m;
  vector<int> ans;
  for (int i = 0; i < arr.size(); i++)
  {
    int first = arr[i];
    int sec = tar - first;
    if (m.find(sec) != m.end())
    {
      ans.push_back(m[sec]);
      ans.push_back(i);
      break;
    }
    m[first] = i;
  }
  return ans;
}
int main()
{
  vector<int> arr = {5, 2, 11, 7, 15};
  int tar = 18;
  vector<int> ans = TwoSum(arr, tar);
  cout << ans[0] << "," << ans[1] << endl;
  return 0;
}