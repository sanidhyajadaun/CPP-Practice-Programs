#include<iostream>
using namespace std;

int main()
{
    string str[10], temp;

    cout<<"Enter 10 words :- "<<endl;
    for(int i=0;i<10;i++)
    {
        getline(cin,str[i]);
    }

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(str[j]>str[j+1])
            {
                temp = str[j];
                str[j]=str[j+1];
                str[j+1]=temp; 
            }

        }
    }

    cout<<"\nWords in lexicograhical Order :-  \n";
    for (int i = 0; i < 9; i++)
    {
        cout<<str[i]<<endl;
    }
    
    return 0;
}