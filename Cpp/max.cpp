#include<iostream>
#include"max.h"
using namespace std;
void number::get()
{
    cin>>n;
}
void number::show()
{
    cout<<n;
}
int maxNumber::operator>(maxNumber b)
{
    return (n>b.n);
}
int main()
{
    maxNumber num[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter "<<i+1<<" num:";
        num[i].get();
    }

    maxNumber maximum;
    maximum=num[0];
    for(int i=1;i<10;i++)
    {
        if(num[i]>maximum)
            maximum=num[i];
    }
    cout<<endl;
    maximum.show();cout<< " is the largest number ."<<endl;

    return 0;

}
