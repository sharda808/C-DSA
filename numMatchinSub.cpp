#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
// int numMathcingSubseq(string s, vector<string>&words){
//   unordered_map<string,int>mp;
// int ans =0;
// for(int i=0; i<words.size(); i++){
//   mp[words[i]]++;
// }
// for(auto it:mp){
//   string word =it.first;
//   int freq = it.second;
//   int i=0,  j=0;
//   while(i<s.size() && j<word.size()){
// if(s[i]==word[j]){
//   i++;
//   j++;
// }
// else{
//   i++;
// }

//   }
//   if(j==word.size()){
//     ans += freq;
//   }

// }
// return ans;
// }
class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        int maxLen = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){

                int a = arr[i];
                int b = arr[j];
                int count = 2;

                while(true){
                    int sum = a + b;
                    bool found = false;

                    for(int k = 0; k < n; k++){
                        if(arr[k] == sum){
                            found = true;
                            break;
                        }
                    }

                    if(found){
                        count++;
                        a = b;
                        b = sum;
                    }else{
                        break;
                    }
                }

                maxLen = max(maxLen, count);
            }
        }

        return maxLen > 2 ? maxLen : 0;
    }
};
int main(){
  string s = "abcde";
vector<string>words = {"a","bb","acd","ace"};
cout<<numMathcingSubseq(s,words);
return 0;
}