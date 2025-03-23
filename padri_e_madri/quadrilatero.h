#ifndef "QUADRILATERO_H"
#define  QUADRILATERO_H

#include <iostream>
#include <cmath> 

class quadrilatero
{
    private:
    int lato1;
    int lato2;
    int lato3;
    int lato4;

    public:
        quadrilatero();
        void SetLato1(int u);
        void SetLato2(int d);
        void SetLato3(int t);
        void SetLato4(int q);
}