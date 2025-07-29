#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you wanted to :";
    cin>>n;
    for(int i=n;i<=10*n;i+=n){
        cout<<i<<" ";
    }
}