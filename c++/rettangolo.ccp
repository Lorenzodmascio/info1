#include <iostream>
#include <cmath> 

class Rettangolo{
private:
            double base;
            double altezza;

public

        Rettangolo() : base(0), altezza(0) {}

        Rettangolo(double parametro) : base(parametro),altezza(parametro){}

        Rettangolo(double base, double altezza) : base(base), altezza(altezza){}

        Rettangolo(){
            std ::cout <<"richiamo il distruttore";
        }


    void setBase(double base) {
        this->base = base;
    }

    void setAltezza(double altezza) {
        this->altezza = altezza;
    }





}

