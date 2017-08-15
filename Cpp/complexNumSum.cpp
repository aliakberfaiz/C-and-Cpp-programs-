#include<iostream>
#include"complex.h"
using namespace std ;
complex::complex(int a)
{

}
complex::complex()
{
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
}
void complex::show()
{
    cout<<a;
    if(b>0)
        cout<<"+i "<<b;
    if(b<0)
        cout<<"-i "<<(-1*b);
}
complex complex ::operator+(complex c)
{
    complex temp(0);
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
int main()
{
    cout<<"enter values for first complex number "<<endl;
    complex a;
    cout<<"Enter values for second complex number "<<endl;
    complex b;
    complex c(0);
    c=a+b;
    c.show();


    return 0;
}
