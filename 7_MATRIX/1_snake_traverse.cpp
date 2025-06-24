#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void snakeTraverse(vector<vector<int>> &matrix)
{
  int row = matrix.size();
  int col = matrix[0].size();
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (i % 2 == 0)
        cout << matrix[i][j] << " ";
      else
        cout << matrix[i][col - j - 1] << " ";
    }
    cout << endl;
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
  snakeTraverse(matrix);
}