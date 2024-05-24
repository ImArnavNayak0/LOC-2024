#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the element in the array: "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The input array is:"<<endl;
     for (i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
    cout<<"Copying the input array...."<<endl;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    cout<<"The copied array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<"\t";
    }
    return 0;
}