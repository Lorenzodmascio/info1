#include <iostream>
using namespace std;

class Rettangolo {
    private:
        double Altezza;
        double Base;

    public:

        void setAltezza(double x){ Altezza = x;};
        void setBase(double y){Base = y;};
        double getAltezza(){return Altezza;}
        double getBase(){return Base;}
        double calcolaPerimetro(){
            double perimetro = 2*(Base + Altezza);
            return perimetro;
        }

        void calcolaArea();
        void stampa();
};

int main (){


    int x,y;
    Rettangolo s1,s2;

    cout << "Inserisci la base: ";
    cin >> x;
    s1.setAltezza(x);

    cout << "Inserisci l'altezza: ";
    cin >> x;
    s1.setBase(x);

    int base = s1.getBase();
    s1.getAltezza();
    cout << "La base e'" << base;

   do s1.calcolaPerimetro();

   
}