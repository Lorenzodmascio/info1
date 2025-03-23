#include <iostream>
#include <cmath> 

class Rettangolo {
private:
    double base;
    double altezza;

public:
 
    Rettangolo() : base(0), altezza(0) {}


    Rettangolo(double parametro) : base(parametro), altezza(parametro) {}

    Rettangolo(double base, double altezza) : base(base), altezza(altezza) {}

    ~Rettangolo() {
        std::cout << "Hai chiamato la funzione distruttrice" << std::endl;
    }
 
   
    void setBase(double base) {
        this->base = base;
    }

    void setAltezza(double altezza) {
        this->altezza = altezza;
    }

  
    double getBase() const {
        return this->base;
    }

    double getAltezza() const {
        return this->altezza;
    }

    double calcolaPerimetro() const {
        return 2 * (this->base + this->altezza);
    }

    double calcolaArea() const {
        return this->base * this->altezza;
    }

    double calcolaDiagonale() const {
        return std::sqrt(this->base * this->base + this->altezza * this->altezza);
    }
};

int main() {
    Rettangolo r1; 
    Rettangolo r2(5);  
    Rettangolo r3(4, 3); 

    std::cout << "Rettangolo 3:" << std::endl;
    std::cout << "Perimetro: " << r3.calcolaPerimetro() << std::endl;
    std::cout << "Area: " << r3.calcolaArea() << std::endl;
    std::cout << "Diagonale: " << r3.calcolaDiagonale() << std::endl;

    return 0;
}