#include <iostream>
#include <vector>
using namespace std;
int FirstOccurrence(vector<int> arr, int i, int target)
{
  if (i == arr.size())
  {
    return -1;
  }
  if (arr[i] == target)
  {
    return i;
  }
  return FirstOccurrence(arr, i + 1, target);
}
int LastOccurence(vector<int> arr, int target, int i)
{
  if (i == arr.size())
  {
    return -1;
  }
  int idxFound = LastOccurence(arr, target, i + 1);
  if (idxFound == -1 && arr[i] == target)
  {
    return i;
  }
  return idxFound;
}
int main()
{
  vector<int> arr = {1, 2, 3, 3, 4, 3};
  cout << "first occurence is:" << FirstOccurrence(arr, 0, 3) << endl;
  cout << "last Occurence is:" << LastOccurence(arr, 3, 0);
  return 0;
}