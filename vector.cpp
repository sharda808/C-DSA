#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v(3, 5);
  for (int x : v)
  {
    cout << x << " ";
  }
  cout << endl;
  vector<int> v1 = {1, 2, 3};
  for (int val : v1)
  {
    cout << val << " ";
  }
  cout << endl;
  vector<char> v2 = {'a', 'f', 'd'};
  v2.push_back('z');
  v2.insert(v2.begin() + 1, 'c');
  for (int i = 0; i < v2.size(); i++)
  {
    cout << v2[i] << " " << endl;
  }
  vector<int> v3 = {10, 20, 30, 40, 50};
  cout << "Element at index 2 using []:" << v3[2] << endl;
  cout << "Element at index 3 using at():" << v3.at(3) << endl;
  // update elements
  vector<int> v4 = {10, 20, 30};
  cout << "orginal at position 1 is:" << v4[0] << endl;
  v4[0] = 50;
  cout << "update value i at position 1 is :" << v4[0] << endl;
  return 0;
}