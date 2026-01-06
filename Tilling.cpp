#include <iostream>
#include <vector>
using namespace std;
int TillingProblem(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  // Vertical
  int ans1 = TillingProblem(n - 1);
  int ans2 = TillingProblem(n - 2);
  return ans1 + ans2;
}
int Friendpairing(Int n)
{
}
int main()
{
  int n = 5;
  cout << TillingProblem(n) << endl;
  return 0;
}