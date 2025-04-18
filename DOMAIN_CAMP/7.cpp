#include <iostream>
using namespace std;
class Employee
{
public:
    int ID;
    string Name;
    double Salary;
    Employee(int id, string name, double salary)
    {
        ID = id;
        Name = name;
        Salary = salary;
    }
    void func()
    {
        cout << "Id is " << ID << endl;
        cout << "Name is " << Name << endl;
        cout << "Salary is " << Salary << endl;
    }
};
int main()
{
    cout << fixed;
    int a;
    string b;
    double c;
    cin >> a >> b >> c;
    Employee e(a, b, c);
    e.func();
}