#include <iostream>
#include <vector>
using namespace std;

// Optimized approach
int Maxm_Subarr_sum(vector<int> &vec)
{
  int maxm = vec[0];
  int curr = vec[0];
  for (int i = 1; i < vec.size(); i++)
  {
    curr = max(vec[i], vec[i] + curr);
    maxm = max(curr, maxm);
  }
  return maxm;
}

// Naive Solution
// int Maxm_Subarr_sum(vector<int> &vec)
// {
//   int maxm = vec[0];
//   for (int i = 0; i < vec.size(); i++)
//   {
//     int sum = 0;
//     for (int j = i; j < vec.size(); j++)
//     {
//       sum += vec[j];
//       maxm = max(maxm, sum);
//     }
//   }
//   return maxm;
// }
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  cout << Maxm_Subarr_sum(vec);
}