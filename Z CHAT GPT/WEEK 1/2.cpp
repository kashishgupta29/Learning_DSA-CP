// 💻 PRACTICE QUESTIONS
// Try writing these programs:
// Check if a number is positive, negative, or zero.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  if (n > 0)
    cout << "POSITIVE";
  else if (n == 0)
    cout << "ZERO";
  else
    cout << "NEGATIVE";
}

// Find the greatest of 3 numbers using if-else.
#include <iostream>
using namespace std;
int main()
{

  int a, b, c;
  cin >> a >> b >> c;
  int largest;
  if (a > b && a > c)
    largest = a;
  else if (b > a && b > c)
    largest = b;
  else
    largest = c;
  cout << largest;
}

// Print the multiplication table of a number up to 10.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= 10; i++)
  {
    cout << i * n << " ";
  }
}

// Print all even numbers from 1 to N using a loop.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
      cout << i << " ";
  }
}

// Find the factorial of a number using a for loop.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int fact = 1;
  for (int i = 2; i <= n; i++)
  {
    fact = fact * i;
  }
  cout << fact;
}

// Check if a number is prime.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  bool found = false;
  if (n == 2 || n == 3)
    found = false;
  else
  {
    for (int i = 2; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        found = true;
        break;
      }
    }
  }
  if (!found)
  {
    cout << "prime";
  }
  else
    cout << "not prime";
}

// Reverse a number.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int rev = 0;
  while (n > 0)
  {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
  }
  cout << rev;
}

// Check if a number is a palindrome.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int temp = n;
  int rev = 0;
  while (n > 0)
  {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
  }
  if (rev == temp)
    cout << "PALINDROME";
  else
    cout << "NOT";
}
// Sum of digits of a number.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int sum_digits = 0;
  while (n > 0)
  {
    int digit = n % 10;
    sum_digits += digit;
    n = n / 10;
  }
  cout << sum_digits;
}
// Fibonacci sequence up to N terms.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a = 0, b = 1;
  if (n == 1)
    cout << 0 << " ";
  else
  {

    if (n > 1)
    {
      cout << 0 << " ";
      cout << 1 << " ";
    }

    n = n - 2;
    while (n--)
    {
      int c = a + b;
      cout << c << " ";
      a = b;
      b = c;
    }
  }
}
// 🧪 MINI TEST
// Write a C++ program that:
// Takes an integer input n
// Prints all numbers from 1 to n that are:
// Divisible by 3 but not by 2
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i % 3 == 0 && i % 2 != 0)
      cout << i << " ";
  }
}