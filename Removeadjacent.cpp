#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
bool isPrime(long long n){
if(n<2) return false;
for(long long i=2; i*i<=n; i++){
  if(n % i==0) {
    return false;
  }
}
return true;
}
long long SumOfLargestPrime(string s){
int n = s.size();
unordered_set<long long >st;
for(int i=0; i<n; i++){
  long long num =0;
  for(int j=i; j<n; j++){
    num = num * 10 + (s[j] -'0');
    if(isPrime(num)){
      st.insert(num);
    }
  }
}
vector<long long>v(st.begin(),st.end());
sort(v.begin(),v.end(), greater<long long>());
long long sum =0;
for(int i=0; i<v.size() && i<3; i++){
  sum += v[i];
}
return sum;
}
int main(){
  string s= "12234";
cout<<SumOfLargestPrime(s);
return 0;
}

