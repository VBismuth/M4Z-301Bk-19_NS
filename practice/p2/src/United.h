#ifndef UNITED_H
#define UNITED_H

class United
{
private:
    int fieldInt; 
    double fieldDouble;
    char fieldChar;
public:
    bool operator> (const United &a);
     bool operator== (const United &a);
    United(const int &X,const double &Y,const char &Z);
    ~United();
};



#endif 
