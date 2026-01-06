#include <iostream>
#include <string>
using namespace std;
void removeDuplicate(string str, string ans, int i, int map[26])
{
  if (i == str.size())
  {
    cout << "ans:" << ans << endl;
    return;
  }
  char ch = str[i];
  int mapIdx = (int)(ch - 'a');
  if (map[mapIdx] == true)
  {
    removeDuplicate(str, ans, i + 1, map);
  }
  else
  {
    map[mapIdx] = true;
    removeDuplicate(str, ans + ch, i + 1, map);
  }
}
int sum(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return n + sum(n - 1);
}
int main()
{
  string str = "sharda";
  string ans = " ";
  int map[26] = {false};
  removeDuplicate(str, ans, 0, map);
  cout << sum(5) << endl;
  return 0;
}