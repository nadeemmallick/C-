#include <iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int main()
{

    int a;
    cout << "Enter the first number :" ;
    cin >> a;
    int b;
    cout << "Enter the second number :";
    cin >> b;
    cout<<sum(a,b);
}