
#include <iostream>
#include <stack>
using namespace std;

class Mistack
{
    int *arr;
    int cap;
};

int main()
{
    stack<int> s, a3;
    s.push(1);
    s.push(4);
    s.push(5);
    s.push(9);
    a3 = s;
    while (!a3.empty())
    {
        cout << a3.top() << " ";
        a3.pop();
    }
    cout << endl;
    stack<int> a1;
    while (!s.empty())
    {
        a1.push(s.top());
        s.pop();
    }
    stack<int> a2;
    while (!a1.empty())
    {
        a2.push(a1.top());
        a1.pop();
    }
    while (!a2.empty())
    {
        cout << a2.top() << " ";
        a2.pop();
    }
}