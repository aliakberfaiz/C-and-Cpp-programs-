#include<iostream>
#include"evenOdd.h"
#include"number.h"
using namespace std;
void number::get()
{
    cin>>n;
}
void number::show()
{
    cout<<n;
}
int evenOdd::operator%(int a)
{
    return (n%a);
}
int main()
{
    evenOdd n;
    cout<<"Enter the value of n ";
    n.get();
    if(n%2==0)
    {
        n.show();cout<<" is an even number "<<endl;
    }
    else{
        n.show();cout<<" is an odd number "<<endl;
    }
    return 0;
}
