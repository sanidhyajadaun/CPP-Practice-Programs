#include<iostream>
using namespace std;

int main()
{
    int n,original,reversed=0,remainder;
    cin>>n;
    original=n;

    while (n!=0)
    {
        remainder = n%10;
        reversed = reversed*10 + remainder;
        n/=10;
    }

    if(original==reversed)
    {
        cout<<"Given number is palindrome";
    }
    else
    {
        cout<<"Given number is not palindrome";
    }
    return 0;
}