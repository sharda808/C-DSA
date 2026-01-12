#include <iostream>
#include <stack>
using namespace std;
bool isParenthesis(string s)
{
  stack<char> st;
  for (size_t i = 0; i < s.size(); i++)
  {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[') // Opening
    {
      st.push(s[i]);
    }
    else // closing
    {
      if (st.size() == 0)
      {
        return false;
      }
      if ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']'))
      {
        st.pop();
      }
      else // no match
      {
        return false;
      }
    }
  }
  return st.size() == 0;
}
int main()
{
  cout << isParenthesis("{[]}");
  return 0;
}
