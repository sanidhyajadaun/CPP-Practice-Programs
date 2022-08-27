#include<iostream>
using namespace std;

int main()
{
    char ch='A';
    int i,j,k;
    
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            cout<<" ";    
        for(k=1;k<=i;k++)    
            cout<<ch++;    
            ch--;    
        for(int m=1;m<i;m++)    
            cout<<--ch;    
        cout<<"\n";    
        ch='A';    
    }    
return 0;  
}  

