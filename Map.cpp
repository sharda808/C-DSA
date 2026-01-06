#include <iostream>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  int arr[5] = {3, 5, 1, 8, 2};
  sort(arr, arr + 5, greater<int>());
  for (int value : arr)
  {
    cout << value << " ";
  }
  cout << endl;
  vector<int> vec = {1, 0, -2, 5, 2};
  sort(vec.begin(), vec.end(), greater<int>());
  for (int num : vec)
  {
    cout << num << " ";
  }
  cout << endl;
  vector<pair<int, int>> nums = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
  sort(nums.begin(), nums.end());
  for (auto p : nums)
  {
    cout << p.first << " " << p.second << endl;
  }
  // unordered_map<string, int> m;

  // unordered_set<int> s; // only  store unique value
  // s.insert(1);
  // s.insert(2);
  // s.insert(4);
  // s.insert(6);
  // s.insert(6);

  // for (auto val : s)
  // {
  //   cout << val << " ";
  // }
  // cout << endl;
  // m["tv"] = 100;
  // m["tablet"] = 45;
  // m["laptop"] = 100;
  // m["headphone"] = 32;
  // m.emplace("camera", 50);
  // m.erase("tablet");
  // for (auto p : m)
  // {
  //   cout << p.first << " " << p.second << endl;
  // }
  // if (m.find("camera") != m.end())
  // {
  //   cout << "found\n";
  // }
  // else
  // {
  //   cout << "not found\n";
  // }
  return 0;
}