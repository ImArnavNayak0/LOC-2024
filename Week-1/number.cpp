#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to check whether it is positive, negative or zero: ";
    cin>>n;
    if(n>0)
    {
        cout<<"The number entered is positive"<<endl;
    }
    else if(n<0)
    {
        cout<<"The number entered is negative"<<endl;
    }
    else
    {
        cout<<"The entered number is zero";
    }
    return 0;
}