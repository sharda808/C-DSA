#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void Reverse(queue<int> &q)
{
  stack<int> s;
  while (!q.empty())
  {
    s.push(q.front());
    q.pop();
  }
  while (!s.empty())
  {
    q.push(s.top());
    s.pop();
  }
}
int main()
{
  queue<int> q;
  q.push(1);
  q.push(3);
  q.push(4);
  q.push(5);
  std::cout << "Original Queue: ";
  // Create a temporary queue to print without modifying the original
  queue<int> tempQueue = q;
  while (!tempQueue.empty())
  {
    std::cout << tempQueue.front() << " ";
    tempQueue.pop();
  }
  std::cout << std::endl;

  // Reverse the queue
  Reverse(q);

  std::cout << "Reversed Queue: ";
  while (!q.empty())
  {
    std::cout << q.front() << " ";
    q.pop();
  }
  std::cout << std::endl;

  return 0;

  return 0;
}
