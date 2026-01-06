#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int st, int mid, int end)
{
  vector<int> temp;
  int i = st;
  int j = mid + 1;

  // Merge the two halves
  while (i <= mid && j <= end)
  {
    if (arr[i] <= arr[j])
    {
      temp.push_back(arr[i++]);
    }
    else
    {
      temp.push_back(arr[j++]);
    }
  }

  // Copy remaining elements from left half
  while (i <= mid)
  {
    temp.push_back(arr[i++]);
  }

  // Copy remaining elements from right half
  while (j <= end)
  {
    temp.push_back(arr[j++]);
  }

  // Copy sorted temp array back into original array
  int x = 0;
  for (int idx = st; idx <= end; idx++)
  {
    arr[idx] = temp[x++];
  }
}

void mergeSort(int arr[], int st, int end)
{
  if (st >= end)
  {
    return;
  }

  int mid = (st + end) / 2;
  mergeSort(arr, st, mid);
  mergeSort(arr, mid + 1, end);
  merge(arr, st, mid, end);
}

void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[6] = {6, 3, 7, 5, 2, 4};
  int n = 6;
  mergeSort(arr, 0, n - 1);
  printArr(arr, n);
  return 0;
}
