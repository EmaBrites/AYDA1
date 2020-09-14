#include "Circulo.h"
#include <math.h>

Circulo::Circulo()
{
    //ctor
}
Circulo::Circulo(Punto p, Segmento s)
{
    this->p=p;
    this->s=s;
}
Punto Circulo::centro()const
{
    return p;
}
float Circulo::radio()const
{
    return s.longitud();
}
float Circulo::perimetro()const
{
    return 2*M_PI*this->radio();
}
float Circulo::area()const
{
    return M_PI*pow(this->radio(),2);
}
bool Circulo::operator==(Circulo & otroCirculo)const
{
    return (p==otroCirculo.centro())&&(s.longitud()==otroCirculo.radio());
}
void Circulo::modificarCirculo(Punto p, Segmento s)
{
    this->p=p;
    this->s=s;
}
Circulo::~Circulo()
{
    //dtor
}
