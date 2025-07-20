#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the first side of triangle :";
    cin>>x;
    int y;
    cout<<"Enter the second side of triangle :";
    cin>>y;
    int z;
    cout<<"Enter the third side of the triangle :";
    cin>>z;
    if((x+y)>z && (y+z)>x && (z+x)>y)
    {
        cout<<"They are the side of triangle";

    }
    else{
        cout<<"not the side of triangle";
    }
}