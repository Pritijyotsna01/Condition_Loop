#include<iostream>
using namespace std;
int main()
{
    char a;
     cout<<"Enter the value of character: " <<endl;
    cin>> a;

    if(a >='A'&& a<= 'Z')
    {
        cout<< "a is in uppercase"<<endl;
    }
    else if(a>= 'a'&& a <= 'z')
    {
         cout<< "a is in lowercase"<<endl;
    }
    else if(a >= '0' && a <= '9')
    {
         cout<< "a is in numeric"<<endl;
    }
    else
    {
         cout<< "a is in invalid"<<endl;
    }
    

    
}


    
 

