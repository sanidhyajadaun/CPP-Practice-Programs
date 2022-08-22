#include<iostream>
using namespace std;

void factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Result = "<<fact;

} 

int main()
{
    int x;
    cin>>x;
    factorial(x);
}