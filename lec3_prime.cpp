#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter the number:"<<endl;
    cin>>n;

    int i = 2;
    while(i<n)
    {
        if(n%i == 0)
        {
            cout<<"The number is not prime"<<endl;
             return 0;
        }
        i = i+1;
    }
    cout<<"The number is prime"<<endl;
      return 0;
   
}