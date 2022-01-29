#include "United.h"
#include "iostream"

 United::United(const int &X,const double &Y,const char &Z)
{
    fieldInt = X;
    fieldDouble = Y;
    fieldChar = Z; 
    std::cout<< fieldInt <<" ";
    std::cout<< fieldDouble <<" ";
    std::cout<< fieldChar <<std::endl;
    
}

bool United::operator> (const United &a)
{
    int count = 0;
    if (this->fieldInt > a.fieldInt)
    {
        count++;
    }
    if (this->fieldDouble > a.fieldDouble)
    {
        count++;
    }
    if (this->fieldChar > a.fieldChar)
    {
        count++;
    }
    if (count >= 2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
bool United::operator== (const United &a)
{
    int count = 0;
    if (this->fieldInt == a.fieldInt)
    {
        count++;
    }
    if (this->fieldDouble == a.fieldDouble)
    {
        count++;
    }
    if (this->fieldChar == a.fieldChar)
    {
        count++;
    }
    if (count >= 3)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

United::~United()
{
}
