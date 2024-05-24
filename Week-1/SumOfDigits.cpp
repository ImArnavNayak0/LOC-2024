#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number to find the sum of digits: ";
    cin>>number;
    int sum = 0;
    int digit;
    do{
        digit=number%10;
        sum=sum+digit;
        number/=10;
    }while (number!=0);
    cout<<"\nThe sum of the digits is: "<<sum<<endl;
    return 0;
}