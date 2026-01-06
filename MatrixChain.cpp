#include <iostream>
#include <vector>
using namespace std;
int mcmRec(vector<int> arr, int i, int j)
{
  if (i == j)
  {
    return 0;
  }
  int ans = INT16_MAX;
  for (int k = i; k < j; k++)
  {
    int cost1 = mcmRec(arr, i, k);
    int cost2 = mcmRec(arr, k + 1, j);
    int currcost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
    ans = min(ans, currcost);
  }
  return ans;
}
int main()
{
  vector<int> arr = {1, 2, 3, 4, 3};
  int n = arr.size();
  cout << mcmRec(arr, 1, n - 1);
  return 0;
}