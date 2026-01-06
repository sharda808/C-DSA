#include <iostream>
using namespace std;
void allOccurences(int arr[], int key, int i, int n)
{
  if (i == n)
  {
    return;
  }
  if (arr[i] == key)
  {
    cout << i << " ";
  }
  allOccurences(arr, key, i + 1, n);
}
int main()
{
  int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
  allOccurences(arr, 5, 0, 9);
  return 0;
}