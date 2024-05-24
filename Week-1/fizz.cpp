#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i==3)
         cout<<"Fizz"<<endl;
        else if(i==5)
         cout<<"Buzz"<<endl;
        else
         cout<<i<<endl;
    }
    return 0;
}