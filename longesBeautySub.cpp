#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
  int longestBeautifulSubstring(string word) {
        int n = word.size();

        int len = 1;
        int distinct = 1;
        int maxLen = 0;

        for(int i = 1; i < n; i++){

            if(word[i] >= word[i-1]){
                len++;

                if(word[i] != word[i-1]){
                    distinct++;
                }
            }
            else{
                len = 1;
                distinct = 1;
            }

            if(distinct == 5){
                maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
int main(){
string word = "aeiaaioaaaaeiiiiouuuooaauuaeiu";
cout<< longestBeautifulSubstring(word);
return 0;
}