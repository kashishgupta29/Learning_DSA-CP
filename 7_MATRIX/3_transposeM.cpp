#include <iostream>
#include <vector>
using namespace std;

void transposeMatrix(vector<vector<int>> &matrix)
{
  int row = matrix.size();
  int col = matrix[0].size();
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < i; j++)
    {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> matrix(n, vector<int>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> matrix[i][j];
    }
  }
  transposeMatrix(matrix);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}