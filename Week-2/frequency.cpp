#include<iostream>
using namespace std;
int main()
{
    int j,i,n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   cout<<"The array given by the user is:\n ";
for (i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
    int frequency[n];
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count+=1;
            }
        }
       frequency[i]=count;
    }
    cout<<"The frequency of each element in the array are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<":"<<frequency[i]<<endl;
    }
}