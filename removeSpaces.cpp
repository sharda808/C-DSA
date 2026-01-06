#include <iostream>
#include <string>
using namespace std;
string removeSpaces(string s)
{
  string result = "";
  for (char c : s)
  {
    if (c != ' ')
    {
      result += c;
    }
  }
  return result;
}
int main()
{
  string s = "Hello World";
  string newstr = removeSpaces(s);
  cout << "Orginal string is:" << s << endl;
  cout << "Without Spaces is:" << newstr << endl;
}