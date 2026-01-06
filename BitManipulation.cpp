#include <iostream>
using namespace std;
void OddorEven(int num)
{
  if (!(num & 1))
  {
    cout << "even\n";
  }
  else
  {
    cout << "odd\n";
  }
}
string isPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return "non prime";
    }
  }
  return "prime";
}
int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return n * factorial(n - 1);
}
int main()
{
  cout << (3 & 5) << endl;
  OddorEven(5);
  OddorEven(8);
  cout << isPrime(4) << endl;
  cout << factorial(6) << endl;
  return 0;
}