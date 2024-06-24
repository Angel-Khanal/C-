#include <iostream>
using namespace std;
void max(int a, int b, int c)
{
    int max;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    cout << "The maximum number is " << max << endl;
}
void min(int a, int b, int c)
{
    int min;
    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    cout << "The minimum number is " << min << endl;
}
int main()
{
    int a, b, c;
    cout << "enter first number: " << endl;
    cin >> a;
    cout << "enter second number: " << endl;
    cin >> b;
    cout << "enter third number: " << endl;
    cin >> c;

    max(a, b, c);
    min(a, b, c);
}

// #include<iostream>
// using namespace std;
// class MaxMin{
//     float a,b,c;
//     public:
//     void getInput(){
//         cout<<"enter 3 number: "<<endl;
//         cin>>a>>b>>c;
//     }
//     void maximum(){
//         int max;
//         if(a>b&&a>c){
//             max=a;
//         }
//         else if(b>a&&b>c){
//            max=b;
//         }
//         else
//            max=c;
//          cout<<max<<" is the maximum"<<endl;
//         }
//     void minimum(){
//         int min;
//         if(a<b&&a<c){
//             min=a;
//         }
//         else if(b<a&&b<c){
//            min=b;
//         }
//         else
//         min=c;
//         cout<<min<<" is the minimum"<<endl;
//     }
//  };
//  int main()
//  {
//     MaxMin M;
//     M.getInput();
//     M.maximum();
//     M.minimum();
//  }
