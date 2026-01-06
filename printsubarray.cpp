#include <iostream>
#include <algorithm>
using namespace std;
// void printsubarray(int *arr, int n)
// {
//   for (int st = 0; st < n; st++)
//   {
//     for (int end = st; end < n; end++)
//       int sum = 0;
//     {
//       for (int i = st; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << ",";
//     }
//     cout << endl;
//   }
// }
void maxSubarraysum1(int *arr, int n)
{
  int maxSum = INT16_MIN;
  for (int st = 0; st < n; st++)
  {
    for (int end = st; end < n; end++)
    {
      int currSum = 0;
      for (int i = st; i <= end; i++)
      {
        currSum += arr[i];
      }
      cout << currSum << ",";
      maxSum = max(maxSum, currSum);
    }
    cout << endl;
  }
  cout << "maximum subarray sum is:" << maxSum << endl;
}
int main()
{
  int arr[6] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(int);
  // printsubarray(arr, n);
  maxSubarraysum1(arr, n);
  return 0;
}