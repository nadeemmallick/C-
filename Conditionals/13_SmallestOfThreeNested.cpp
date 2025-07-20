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
    if (a < b)
    {
        if (a < c)
        {
            cout << a << "is smallest";
        }
        else
        {
            cout << c << "is smallest";
        }
    }
    else
    {
        if (b < c)
        {
            cout << b << "is smallest";
        }
        else
        {
            cout << c << "is smallest";
        }
    }
}