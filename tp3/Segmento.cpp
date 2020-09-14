#include "Segmento.h"

Segmento::Segmento()
{
    //ctor
}
Segmento::Segmento(Punto p1, Punto p2)
{
    this->p1=p1;
    this->p2=p2;
}
Punto Segmento::extremo1()const
{
    return p1;
}
Punto Segmento::extremo2()const
{
    return p2;
}
float Segmento::longitud()const
{
    return p1.distancia(p2);
}
bool Segmento::operator==(Segmento & otroSegmento)const
{
    return (p1==otroSegmento.extremo1())&&(p2==otroSegmento.extremo2());
}
void Segmento::modificarSegmento(Punto p1, Punto p2)
{
    this->p1=p1;
    this->p2=p2;
}
Segmento::~Segmento()
{
    //dtor
}
