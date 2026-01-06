#include <iostream>
#include <string>
#include <stack>
using namespace std;
string Reversestring(string str)
{
  stack<int> s;
  string ans = "";
  for (int i = 0; i < str.size(); i++)
  {
    s.push(str[i]);
  }
  while (!s.empty())
  {
    char top = s.top();
    ans += top;
    s.pop();
  }
  return ans;
}
int main()
{
  string str = "Vikream";
  cout << "reverse of string is:" << Reversestring(str) << endl;
  return 0;
}
