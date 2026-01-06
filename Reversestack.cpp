#include <iostream>
#include <stack>
using namespace std;
void Reverse(stack<int> &s1)
{
  stack<int> s2;
  while (!s1.empty())
  {
    s2.push(s1.top());
    s1.pop();
  }
  while (!s2.empty())
  {
    s1.push(s2.top());
    s2.pop();
  }
}
int main()
{
  stack<int> s1;
  for (int i = 1; i <= 5; i++)
  {
    s1.push(i);
  }
  Reverse(s1);
  cout << "Reverse of stack is:";
  for (int i = 1; i <= 5; i++)
  {
    cout << s1.top() << " ";
    s1.pop();
  }
  cout << endl;
  return 0;
}
