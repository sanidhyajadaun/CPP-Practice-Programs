#include<iostream>
using namespace std;

int main()
{
    int x;
    bool is_prime = true;
    cin>>x;

    //Condition to check if number 0 or 1 
    //Coz 0 & 1 aren't prime
    if(x==0||x==1)
    {
        is_prime = false;
    }

    //loop to check if x is prime or not
    for(int i=2;i<=x/2;++i)
    {
        if(x%i==0)
        {
            is_prime=false;
        }
        break;
    }

    if(is_prime)
    {
        cout<<"\nGiven number is prime";
    }
    else{
        cout<<"\nGiven number is not prime";
    }
}