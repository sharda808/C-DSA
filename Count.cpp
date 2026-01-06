#include <iostream>
#include <string>
using namespace std;
int countVowels(string str)
{
  int count = 0;
  for (char C : str)
  {
    char c = tolower(C);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
      count++;
    }
  }
  return count;
}
int main()
{
  cout << countVowels("sharda");
  return 0;
}