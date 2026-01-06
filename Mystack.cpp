#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class mystack
{
public:
  queue<int> q1;
  queue<int> q2;
  vector<int> pushedElement;
  void push(int x)
  {
    while (!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
    q1.push(x);
    pushedElement.push_back(x);
    while (!q2.empty())
    {
      q1.push(q2.front());
      q2.pop();
    }
  }
  int pop()
  {
    int ans = q1.front();
    q1.pop();
    return ans;
  }
  int top()
  {
    return q1.front();
  }
  bool isEmpty()
  {
    return q1.empty();
  }
  void printAllPushedElements()
  {
    cout << "All pushed elements: ";
    if (pushedElement.empty())
    {
      cout << "None" << endl;
      return;
    }
    for (int element : pushedElement)
    {
      cout << element << " ";
    }
    cout << std::endl;
  }
};
int main()
{
  mystack ms;
  ms.push(2);
  ms.push(3);
  ms.push(1);
  ms.push(7);
  cout << "top element of stack is:" << ms.top() << endl;
  cout << "stack is empty is not:" << ms.isEmpty() << endl;
  ms.printAllPushedElements();
  return 0;
}
