// 🧠 PRACTICE QUESTIONS (Try These):
// Take two numbers and print their sum, difference, product, and quotient.
#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  cout << "SUM = " << a + b << ", Diff: " << a - b << ", Quotient" << a / b << ", product: " << a * b;
}

// Take the radius of a circle and compute its area.
// 📝 Hint: area = 3.14 * r * r
#include <iostream>
using namespace std;
int main()
{
  int r;
  cin >> r;
  cout << "Area = " << 3.14 * r * r;
}

// Swap two numbers (with and without a temporary variable).
#include <iostream>
using namespace std;
int main()
{
  // with temp variable
  int a, b;
  cin >> a >> b;
  int c = b;
  b = a;
  a = c;
  cout << "a = " << a << "b = " << b;
}
#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "a = " << a << "b = " << b;
}

// Take name and age as input and print a sentence using them.
#include <iostream>
using namespace std;
int main()
{
  int age;
  string name;
  cout << "MY name is " << name << " and i am " << age << " yrs old.";
}

// ✅ MINI TEST:
// Write a program that takes 3 integers as input and prints:
// The sum and average
// The largest among them
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
  cout << "SUM = " << a + b + c << ", Average" << (a + b + c) / 3 << ", largest" << largest;
}
