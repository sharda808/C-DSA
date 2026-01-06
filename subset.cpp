#include <iostream>
#include <string>
using namespace std;
void printSubset(string str, string subset)
{
  if (str.size() == 0)
  {
    cout << subset << "\n";
    return;
  }
  char ch = str[0];
  // Yes choice
  printSubset(str.substr(1, str.size() - 1), subset + ch);
  // no choice
  printSubset(str.substr(1, str.size() - 1), subset);
}
int main()
{
  string str = "abc";
  string subset = "";
  printSubset(str, subset);
  return 0;
}
// int main()
// {
//   string str = "sharda";
//   cout << str.substr(2, str.size() - 1);
//   return 0;
// }