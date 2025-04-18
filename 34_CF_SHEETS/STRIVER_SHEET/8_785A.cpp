#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<string> a(n);
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == "Tetrahedron")
      k += 4;
    else if (a[i] == "Octahedron")
      k += 8;
    else if (a[i] == "Cube")
      k += 6;
    else if (a[i] == "Dodecahedron")
      k += 12;
    else
      k += 20;
  }
  cout << k;
}