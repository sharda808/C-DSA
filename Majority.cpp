#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void MajorityElement(vector<int> nums)
{
  unordered_map<int, int> m; // Elemnet,freq
  for (int i = 0; i < nums.size(); i++)
  {
    if (m.count(nums[i]))
    {
      m[nums[i]]++;
    }
    else
    {
      m[nums[i]] = 1;
    }
  }
  for (pair<int, int> p : m)
  {
    if (p.second > nums.size() / 3)
    { // second is frequency
      cout << p.first << " ";
    }
  }
  cout << endl;
}
int main()
{
  vector<int> nums = {1, 3, 2, 5, 1, 3, 1, 5, 1};
  vector<int> nums2 = {1, 2, 1};
  MajorityElement(nums);
  MajorityElement(nums2);
  return 0;
}
