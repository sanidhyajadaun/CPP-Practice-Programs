#include<iostream>
using namespace std;

//with recursion
void fibonacci(int n)
{
    static int a=0,b=1,c;
    if(n>0)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<" "<<c;
        fibonacci(n-1);
    }

}

int main()
{
    int n;
    cin>>n;
    cout<<0<<" "<<1;
    fibonacci(n-2);
    return 0;
}


//without recursion
/*
int main()
{
    int a,b,c,n;
    cin>>n;
    a=0;
    b=1;
    cout<<a<<" "<<b;
    for(int i=2;i<n;i++)
    {   
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    return 0;

}*/