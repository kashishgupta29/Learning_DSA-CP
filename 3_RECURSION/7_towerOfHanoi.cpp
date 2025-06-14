#include <iostream>
using namespace std;
void TowerOfHanoi(int n, char from_tower, char to_tower, char aux_tower)
{
  if (n == 0)
    return;
  TowerOfHanoi(n - 1, from_tower, aux_tower, to_tower);
  cout << "MOVE FROM " << from_tower << " TO " << to_tower << endl;
  TowerOfHanoi(n - 1, aux_tower, to_tower, from_tower);
}
int main()
{
  int n;
  cin >> n;
  TowerOfHanoi(n, 'A', 'B', 'C');
}