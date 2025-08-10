#include <bits/stdc++.h>
using namespace std;

// with array
class Mystack()
{
  int *arr;
  int cap;
  int top;

public:
  Mystack(int c)
  {
    cap = c;
    arr = new int[cap];
    top = -1;
  }
  void push(int x)
  {
    if (top == (cap - 1))
      return;
    top++;
    arr[top] = x;
  }
  int pop()
  {
    if (top == -1)
      return -1;
    int res = arr[top];
    top--;
    return res;
  }
  int peek()
  {
    if (top == -1)
      return -1;
    return arr[top];
  }
  int size()
  {
    return (top + 1);
  }
  bool isEmpty()
  {
    return (top == -1);
  }
};