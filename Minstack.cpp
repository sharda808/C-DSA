#include <iostream>
#include <stack>
using namespace std;
class minStack
{
public:
  stack<pair<int, int>> s;

  void push(int val)
  {
    if (s.empty())
    {
      s.push({val, val});
    }
    else
    {
      int minVal = min(val, s.top().second);
      s.push({val, minVal});
    }
  }
  void pop()
  {
    s.pop();
  }
  int top()
  {
    return s.top().first;
  }
  int getMin()
  {
    return s.top().second;
  }
};
int main()
{
  minStack ms;
  ms.push(5);
  ms.push(-2);
  ms.push(2);
  cout << "top is:" << ms.top() << endl;
  cout << "minimun val is:" << ms.getMin() << endl;
  return 0;
}