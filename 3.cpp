#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter the store quantity: " ;
    cin >> num1;
    cout << "enter the order quantity: ";
    cin >> num2;
    if (num1 < num2)
    {
        cout << "No enough quantity." << endl;
    }
    else
    {
        if (num1 >= 41)
        {
            cout << "Your order is accepted." << endl;
        }
        else
        {
            if (num2 > 16)
            {
                cout << "You cannot order more than 16 item.";
            }
        }
    }
}