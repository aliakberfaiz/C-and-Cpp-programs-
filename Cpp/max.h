#ifndef MAX_H
#define MAX_H
#include"number.h"
class maxNumber:public number
{
public:
    int operator>(maxNumber);
};
#endif // MAX_H
