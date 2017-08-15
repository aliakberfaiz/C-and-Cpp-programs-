#ifndef COMPLEX_H
#define COMPLEX_H
class complex
{
    int a,b;
public:
    complex();
    complex(int );
    complex operator+(complex);
    void show();
};
#endif // COMPLEX_H
