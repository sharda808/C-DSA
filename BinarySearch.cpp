#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<int> &arr, int tar, int st, int end)
{
  if (st <= end)
  {
    int mid = (st + end) / 2;
    if (arr[mid] == tar)
    {
      return mid;
    }
    else if (arr[mid] <= tar)
    {
      return BinarySearch(arr, tar, mid + 1, end);
    }
    else
    {
      return BinarySearch(arr, tar, st, mid - 1);
    }
  }
  return -1;
}
int main()
{
  vector<int> arr = {-1, 0, 3, 5, 9, 12};
  cout << BinarySearch(arr, 4, 0, arr.size() - 1);
  return 0;
}