#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>
using namespace std;
   string replaceWords(vector<string>& dic, string sentence) {
    int n = dic.size();
    // store dic in set
    unordered_set<string>s;
    for(string &w: dic){
s.insert(w);
   }
   // split sentence in words
   vector<string>words;
   string temp = "";
for(char ch : sentence){
    if(ch == ' '){
      words.push_back(temp);
      temp = "";
    }
    else{
      temp += ch;
    }
   }
   words.push_back(temp);
   string result = "";
   for(string word:words){
    string prefix = "";
    bool found = false;
    for(char ch: word){
      prefix += ch;
      if(s.count(prefix)){
        result += prefix + " ";
        found = true;
        break;
      }
    }
    if(!found){
      result += word + " ";
    }
   }
   result.pop_back();
   return result;
  }
int main(){
  vector<string>dic = {"cat","bat","rat"};
  string sentence = "the cattle was rattled by the battery";
  cout<<replaceWords(dic, sentence);
  return 0;

}


