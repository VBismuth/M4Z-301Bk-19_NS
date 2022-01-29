#ifndef UNITED_H
#define UNITED_H

class United
{
private:
    int fieldInt;
    double fieldDouble;
    char fieldChar;
public:
    bool operator > (const United &a);
    United(int &X, double &Y, char &Z);
    ~United();
};

#endif
