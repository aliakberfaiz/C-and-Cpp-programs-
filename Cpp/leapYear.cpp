#include<iostream>
#include"leapYear.h"
using namespace std;
void number::get()
{
    cin>>n;
}
void number::show()
{
    cout<<n;
}
int leapYear::operator%(int a)
{
    return (n%a);
}
int main()
{
    leapYear year;
    cout<<"\t\tLeap year checker:---- "<<endl;
    cout<<"Enter the year :";
    year.get();
    if(year%4==0&&year%100!=0 ||  year%400==0)
    {
        year.show();cout<<" is a leap year ."<<endl;
    }
    else{
        year.show();cout<<" is not a leap year ."<<endl;
    }
    return 0;
}

