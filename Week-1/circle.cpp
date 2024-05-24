#include<iostream>
using namespace std;
const float pi=3.14;
int main()
{
    int r,d;
    float c,area;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    d=(2*r);
    c=(2*pi*r);
    area=(pi*r*r);
    cout<<"\nDiameter: "<<d<<endl;
    cout<<"Circumference: "<<c<<endl;
    cout<<"Area: "<<area<<endl;
    return 0;
}