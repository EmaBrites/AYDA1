#ifndef CIRCULO_H
#define CIRCULO_H
#include "Punto.h"
#include "Segmento.h"

class Circulo
{
    public:
        Circulo();
        Circulo(Punto p,Segmento s);
        Punto centro()const;
        float radio()const;
        float perimetro()const;
        float area()const;
        bool operator==(Circulo & otroCirculo)const;
        void modificarCirculo(Punto p, Segmento s);
        virtual ~Circulo();

    protected:

    private:
        Punto p;
        Segmento s;
};

#endif // CIRCULO_H
