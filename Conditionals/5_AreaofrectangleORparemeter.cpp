#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the lenth of rectangle :";
    cin>>l;
    cout<<"Enter the breath of rectangle :";
    cin>>b;
    cout<<"Area of retangle :"<<l*b<<endl;
    cout<<"Paremeter of rectangle :"<<2*(l*b)<<endl;

    if(l*b>2*(l*b)){
        cout<<"Area of rectangle is greater than parameter";
    }
    else{
        cout<<"parameter is greater than area";
    }
    
}