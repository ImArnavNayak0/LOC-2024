#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of lines you want to print: ";
    cin>>n;
    cout<<endl;
    for(i=0;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<"*"<<"\t";
        }
        cout<<endl;
    }
    return 0;
}