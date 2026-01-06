#include <iostream>
#include <unordered_map>
using namespace std;
void findFrequancy(string s)
{
  unordered_map<char, int> freq;
  for (char c : s)
  {
    if (c != ' ')
    {

      freq[c]++;
    }
  }
  cout << "character Frequencies is\n";
  for (auto p : freq)
  {
    cout << p.first << " = " << p.second << endl;
  }
}
int main()
{
  string s = "hello world";
  findFrequancy(s);
  return 0;
}