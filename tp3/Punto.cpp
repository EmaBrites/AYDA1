#include "Punto.h"
#include <math.h>

Punto::Punto()
{
    //ctor
}
Punto::Punto(float x,float y)
{
    this->x=x;
    this->y=y;
}
float Punto::coordx()const
{
    return x;
}
float Punto::coordY()const
{
    return y;
}
float Punto::distancia(const Punto & otroPunto)const
{
    return sqrt(pow(x-otroPunto.coordx(),2)+pow(y-otroPunto.coordY(),2));
}
bool Punto::operator==(const Punto & otroPunto)const
{
    if ((this->x==otroPunto.coordx())&&(this->y==otroPunto.coordY()))
        return true;
    else
        return false;
}
void Punto::modificarPunto(float x, float y)
{
    this->x=x;
    this->y=y;
}
Punto::~Punto()
{
    //dtor
}
