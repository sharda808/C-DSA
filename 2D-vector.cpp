#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
  vector<int> ans;
  unordered_set<int> s;
  int n = grid.size();
  int a, b;
  int expsum = 0, actualsum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      actualsum += grid[i][j];
      if (s.find(grid[i][j]) != s.end())
      {
        a = grid[i][j];
        ans.push_back(a);
      }
      s.insert(grid[i][j]);
    }
  }
  expsum = (n * n) * (n * n + 1) / 2;
  b = expsum + a - actualsum;
  ans.push_back(b);
  return ans;
}
int findDuplicate(vector<int> &nums)
{
  unordered_set<int> s;
  for (int val : nums)
  {
    if (s.find(val) != s.end())
    {
      return val;
    }
    s.insert(val);
  }
  return -1;
}
int main()
{
  vector<vector<int>> grid = {{1, 1, 7}, {8, 9, 2}, {3, 4, 6}};
  vector<int> nums = {3, 1, 3, 4, 2};
  vector<int> ans = findMissingAndRepeatedValues(grid);
  cout << "reapeated value is:" << ans[0] << endl;
  cout << "Missing value is:" << ans[1] << endl;
  cout << findDuplicate(nums);
  return 0;
}