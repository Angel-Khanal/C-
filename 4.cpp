#include <iostream>
using namespace std;
class EMPLOYEE
{
    int emp_no;
    char emp_name[20];
    float DA, IT, Basic, Net;

public:
    void getdata()
    {
        cout << "enter the emplyoee number: ";
        cin >> emp_no;
        cout << "enter your name: ";
        cin >> emp_name;
        cout << "enter the salary: ";
        cin >> Basic;
    }
    void NetSalary()
    {
        DA = 0.52 * Basic;
        float gross = DA + Basic;
        IT = 0.3 * gross;
        Net = gross - IT;
    }
    void output()
    {
        cout << endl;
        cout << "Employee Number : " << emp_no << endl
             << "Employee Name : " << emp_name << endl
             << "Net salary : " << Net << endl;
    }
};
int main()
{
    int n;
    cout << "How many data you want? " << endl;
    cin >> n;
    EMPLOYEE a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].getdata();
        a[i].NetSalary();
    }
    for (int i = 0; i < n; i++)
    {
        a[i].output();
    }
}