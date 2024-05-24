#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c=1;
    cout<<"Enter the number of lines you want to print: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<c<<"\t";
            c+=1;
        }
        cout<<"\n";
    }
    return 0;
}