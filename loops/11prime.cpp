#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the no :";
    cin >> n;
   
    for (int i = 1; i <= n ; i++)
    {
        if (n % i != 0)
        {
           cout<<"prime";
        }
        if(n==1){
            cout<<"no";
        }
    }
}