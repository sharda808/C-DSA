#include <iostream>
#include <string>
using namespace std;
int main()
{
  // char ch = '5';
  // cout << "ASCII value of '5' is:" << int(ch) << endl;
  // cout << ch - '0';

  string s = "456";
  int num = 0;
  for (char c : s)
  {
    num = num * 10 + (c - '0');
  }
  cout << num << endl;
  return 0;
}