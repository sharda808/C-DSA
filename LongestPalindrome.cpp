#include <iostream>
#include <string>
using namespace std;


void expand(string &s, int l, int r, int &st, int &len) {
    while (l >= 0 && r < s.size() && s[l] == s[r]) {
        if (r - l + 1 > len) {
            st = l;
            len = r - l + 1;
        }
        l--;
        r++;
    }
}

string longestPalindrome(string s) {
    int n = s.length();
    int st = 0;
    int len = 1;

    for (int i = 0; i < n; i++) {
        expand(s, i, i, st, len);     
        expand(s, i, i + 1, st, len); 
    }

    return s.substr(st, len);
}

int main() {
    string s = "babad";
    cout << longestPalindrome(s);
    return 0;
}
