#include <iostream>
#include <cstring>
#include <Stack>
#include <vector>
using namespace std;

int getvowelcount(string str3)
{
  int vowelcount = 0;
  for (int i = 0; i < str3.length(); i++)
  {
    if (str3[i] == 'a' || str3[i] == 'e' || str3[i] == 'i' || str3[i] == 'o' || str3[i] == 'u')
    {
      vowelcount++;
    }
  }
  return vowelcount;
}
vector<char> Reversestring(vector<char> str4)
{
  vector<char> ans;
  int n = str4.size();
  int st = 0, end = n - 1;
  while (st < end)
  {
    swap(str4[st++], str4[end--]);
  }
}
// reverse the string using stack
string reverse(string name)
{
  string ans;
  stack<char> s;
  for (int i = 0; i < name.length(); i++)
  {
    s.push(name[i]);
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
  vector<char> str4 = "nandini";
  vector<char> ans = str4;
  string str3 = "Rituraj";
  string name = "sharda";
  char word[] = "code";
  string str = "apna college";

  string str1 = "helloWorld";
  string str2 = "I love coding in c++ & jave but i don't loke python";
  cout << str.length() << endl;
  cout << str[3] << endl;
  cout << str.at(5) << endl;
  cout << str1.substr(1, 5) << endl;
  cout << str1.substr(0, 5) << endl;
  cout << str2.find("c++") << endl;
  cout << getvowelcount(str3) << endl;
  cout << reverse(name);
  return 0;
}