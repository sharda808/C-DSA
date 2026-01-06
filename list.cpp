#include <iostream>
using namespace std;
void allOccurence(int arr[], int key, int i, int n)
{
  if (i == n)
  {
    return;
  }
  if (arr[i] == key)
  {
    cout << i << " ";
  }
  allOccurence(arr, key, i + 1, n);
}
int main()
{
  int arr[6] = {1, 2, 4, 2, 5, 2};
  allOccurence(arr, 2, 0, 6);
  return 0;
}