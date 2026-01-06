#include <iostream>
using namespace std;
void BasicCal(int a, int b)
{
  cout << "addition of two number is:" << a + b << endl;
  cout << "substraction of two number is:" << a - b << endl;
  cout << "Multiplication of two number is:" << a * b << endl;
  cout << "Division of two number is:" << a / b << endl;
}
int main()
{
  BasicCal(8, 4);
  return 0;
}