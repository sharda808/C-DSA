#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
// bool ispalindrome(string word, int n)
// {
//   int st = 0, end = n - 1;
//   while (st < end)
//   {
//     if (word[st++] != word[end--])
//     {
//       cout << "not palindrome\n";
//       return false;
//     }
//   }
//   cout << "valid palindome\n";
//   return true;
// }

string reverseWords(string s)
{
  int n = s.length();
  string ans = "";
  reverse(s.begin(), s.end());

  for (int i = 0; i < n; i++)
  {
    string word = "";
    while (i < n && s[i] != ' ')
    {
      word += s[i];
      i++;
    }
    reverse(word.begin(), word.end());
    if (word.length() > 0)
    {
      ans += " " + word;
    }
  }
  return ans.substr(1);
}

int main()
{
  string s = "the sky is blue";
  reverseWords(s);
  cout << reverseWords(s) << endl;

  return 0;
}