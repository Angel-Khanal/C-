#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    static int count1, count2, count3;
    int emp_id;
    char name[20], designation[10];

public:
    void getinput()
    {
        cout << "Enter employee id : ";
        cin >> emp_id;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter your designation[Manager,Engineer,Employee] : ";
        cin >> designation;
        strupr(designation);
    }
    void count()
    {
        if (strcmp(designation, "MANAGER") == 0)
        {
            count1++;
        }
        // if (designation == "ENGINEER")
        // {
        //     count2++;
        // }
        // if (designation == "EMPLOYEE")
        // {
        //     count3++;
        // }
    }
    void output()
    {
        cout << "The total no of manager is " << count1 << endl;
        cout << "The total no of engineer is " << count2 << endl;
        cout << "The total no of employee is " << count3 << endl;
    }
};
int employee::count1=0;
int main()
{
    int n;
    cout << "How many data you want? ";
    cin >> n;
    employee a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].getinput();
    }
    for (int i = 0; i < n; i++)
    {
        a[i].count();
    }
    a[0].output();
}
