#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the no :";
    cin >> n;
    bool flag = true; // true mean prime
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            flag = false; // false mean composite
            break;
        }
    }
    if (n == 1)
    {
        cout << "nither composite nor prime";
    }
    else if (flag == true)
    {
        cout << "prime";
    }
    else
    {
        cout << "composite";
    }
}