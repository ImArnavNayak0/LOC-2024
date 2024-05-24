#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string to find out the number of alphabets, digits and special characters: ";
    cin>>str;
    int alphabets=0,digits=0,characters=0;
    for(char ch:str)
    {
        if(isalpha(ch))
        {
            alphabets++;
        }
        else if(isdigit(ch))
        {
            digits++;
        }
        else if(!isspace(ch))
        {
            characters++;
        }
    }
    cout<<"Alphabets: "<<alphabets<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Special Characters: "<<characters<<endl;
    return 0;
}