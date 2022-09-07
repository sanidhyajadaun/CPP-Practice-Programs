#include<iostream>
using namespace std;

int main()
{
    char c;

    cout<<"\nEnter the character :- ";
    cin>>c;
    
    if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' ||c=='U')
    {
        cout<<"\nCharacter "<<c<<" is a vowel !!!";
    }
    else
    {
        cout<<"\nCharacter "<<c<<" is a consonant !!!";
    }
    return 0;
}
