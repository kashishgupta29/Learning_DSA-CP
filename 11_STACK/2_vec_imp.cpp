#include <iostream>
#include <vector>
using namespace std;

// with vector
class Mystack()
{
  vector<int> arr;

public:
  int push(int x)
  {
    arr.push_back(x);
  }
  int pop()
  {
    int res = arr.back();
    arr.pop_back();
    return res;
  }
  int peek()
  {
    return arr.back();
  }
  int size()
  {
    return arr.size();
  }
  bool isEmpty()
  {
    return arr.empty();
  }
}