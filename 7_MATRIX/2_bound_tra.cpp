#include <iostream>
#include <vector>
using namespace std;
void boundaryTraversal(vector<vector<int>> &matrix)
{
  int row = matrix.size();
  int col = matrix[0].size();
  if (row == 1)
  {
    for (int i = 0; i < col; i++)
    {
      cout << matrix[0][i] << " ";
    }
  }
  else if (col == 1)
  {
    for (int i = 0; i < row; i++)
    {
      cout << matrix[i][0] << " ";
    }
  }
  else
  {
    for (int j = 0; j < col; j++)
    {
      cout << matrix[0][j] << " ";
    }
    for (int j = 1; j < row; j++)
    {
      cout << matrix[j][col - 1] << " ";
    }
    for (int j = 1; j < col - 1; j++)
    {
      cout << matrix[row - 1][col - j - 1] << " ";
    }
    for (int j = 0; j < row - 1; j++)
    {
      cout << matrix[row - j - 1][0] << " ";
    }
  }
  cout << endl;
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
  boundaryTraversal(matrix);
}