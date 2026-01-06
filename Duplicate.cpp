#include <iostream>
#include <cstring>
using namespace std;
bool ispalindrome(char str[], int n)
{
  int st = 0, end = n - 1;
  while (st < end)
  {
    if (str[st++] != str[end--])
    {
      cout << "not palindrome\n";
      return false;
    }
  }
  cout << "valid palindrome\n";
  return true;
}
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
  char str[] = "maam";
  int arr[6] = {1, 2, 4, 2, 7, 2};
  ispalindrome(str, strlen(str));
  allOccurences(arr, 2, 0, 6);
  return 0;
}
