#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void reverse(vector<vector<int>> &matrix)
{
  int row = matrix.size();
  for (int i = 0; i < row; i++)
  {
    int col_start = 0;
    int col_end = matrix[0].size() - 1;
    while (col_start < col_end)
    {
      swap(matrix[i][col_start], matrix[i][col_end]);
      col_start++;
      col_end--;
    }
  }
}
void transposeMatrix(vector<vector<int>> &matrix)
{
  reverse(matrix);
  int n = matrix.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
}
int main()
{
  int n;
  cin >> n;
  vector<vector<int>> matrix(n, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> matrix[i][j];
  }
  transposeMatrix(matrix);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << matrix[i][j] << " ";
    cout << endl;
  }
}