#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the first no :";
    cin >> a;
    cout << "enter the second no :";
    cin >> b;
    cout << "enter the third no :";
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << "is greatest";
    }
    else if (b > a && b > c)
    {
        cout << b << "is greatest";
    }
    else
    {
        cout << c << "is greatest";
    }
}