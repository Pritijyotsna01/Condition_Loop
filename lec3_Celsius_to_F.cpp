#include<iostream>
using namespace std;
int main()
{
    float f;
    cout<<"Enter the value of farenheit:"<<endl;
    cin>>f;

    float c;
    c = 5.0/9 * (f - 32);
    cout<<"Conversion of farenheit to celsius is :"<<c<<endl;
}