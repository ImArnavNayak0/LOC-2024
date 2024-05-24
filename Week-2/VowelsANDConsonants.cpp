#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string to check the number of vowels and consonants: ";
    cin>>str;
    cout<<endl;
    int vowels=0, consonants=0;
    for(char ch : str)
    {
        ch=tolower(ch);
        if(isalpha(ch))
        {
             switch (ch)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
            }
        }
    }
    cout<<"Number of vowels: "<<vowels<<endl;
    cout<<"Number of consonants: "<<consonants<<endl;
    return 0;
}