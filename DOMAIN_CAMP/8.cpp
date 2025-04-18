#include <iostream>
using namespace std;
class Employee
{
public:
    string Name;
    int ID;
    int Salary;
};
class Employee1 : public Employee
{
public:
    int Rating;
    Employee1(string name, int id, int salary, int rating)
    {
        Name = name;
        ID = id;
        Salary = salary;
        Rating = rating;
    }
    void func()
    {
        cout << "Employee name: " << Name << endl
             << "Role Manager" << endl
             << "Salary: " << Salary << endl
             << "Bonus: " << (Rating * 5000) << endl
             << "Total Earning: ";
    }
};
class Employee2 : public Employee
{
public:
    int ExtraHours;
};
int main()
{
    int a;
    cin >> a;
    if (a == 1)
    {
    }
}