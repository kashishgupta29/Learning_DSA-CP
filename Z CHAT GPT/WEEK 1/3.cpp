// 💻 Practice Questions (Don't Code Yet — Think First)
// 1. Write a function int square(int x) that returns the square of a number.
// 💡 Think: What data types are involved? Do I need input from user in main() or function?
#include <iostream>
using namespace std;
int square(int n)
{
  return n * n;
}
int main()
{
  int n;
  cin >> n;
  cout << square(n);
}
// 2. Write a function bool isEven(int n) to check if a number is even.
// 💡 Think: What does it return? Can you reuse it later?
#include <iostream>
using namespace std;
bool isEven(int n)
{
  return n % 2 == 0;
}
int main()
{
  int n;
  cin >> n;
  if (isEven(n))
    cout << "EVEN";
  else
    cout << "ODD";
}
// 3. Write a function int factorial(int n) using a loop.
// 💡 Think: What is factorial? Use a loop inside your function.
#include <iostream>
using namespace std;
int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}
int main()
{
  int n;
  cin >> n;
  cout << factorial(n);
}
// 4. Write a function void swap(int &a, int &b) using pass by reference.
// 💡 Think: When and why do we use reference? How does it swap in-place?
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
int main()
{
  int a, b;
  cin >> a >> b;
  cout << "initial a b" << a << " " << b;
  swap(a, b);
  cout << "final a b" << a << " " << b;
}

// 5. Create a calculator:
// Functions: add(a, b), subtract(a, b), multiply(a, b), divide(a, b)
// Use them in main.
#include <iostream>
using namespace std;
int add(int a, int b)
{
  return a + b;
}
int subtract(int a, int b)
{
  return a - b;
}
int multiply(int a, int b)
{
  return a * b;
}
int divide(int a, int b)
{
  return a / b;
}
int main()
{
  int a, b;
  cin >> a >> b;
  cout << "SUM" << add(a, b);
  cout << "DIFFERENCE" << subtract(a, b);
  cout << "MULTIPLY" << multiply(a, b);
  cout << "DIVIDE" << divide(a, b);
}