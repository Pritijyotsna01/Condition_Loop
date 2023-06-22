#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int i = 2;
    int sum = 0;
    while(i<=n)
    {
        if(i%2 == 0)
        {
            sum = sum+i;
            
        }
         i = i+1;
       
    }
    cout<<"The sum of all even numbers from 1 to n is:"<<sum<<endl;
    return 0;
}