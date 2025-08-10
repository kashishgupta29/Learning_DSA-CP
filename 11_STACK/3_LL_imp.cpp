#include <iostream>
using namespace std;
struct Node
{
  int data;
  Node *next;
  Node(int d)
  {
    data = d;
    next = nullptr;
  }
};
class Mystack
{
  Node *head;
  int cap;
  int top;
  Mystack(int c)
  {
    cap = c;
  }
};