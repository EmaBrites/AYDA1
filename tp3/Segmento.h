#ifndef SEGMENTO_H
#define SEGMENTO_H
#include "Punto.h"

class Segmento
{
    public:
        Segmento();
        Segmento(Punto p1,Punto p2);
        Punto extremo1()const;
        Punto extremo2()const;
        float longitud()const;
        bool operator==(Segmento & otroSegmento)const;
        void modificarSegmento(Punto p1, Punto p2);
        virtual ~Segmento();

    protected:

    private:
        Punto p1,p2;
};

#endif // SEGMENTO_H
