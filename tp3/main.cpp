#include <iostream>
#include "Punto.h"
#include "Segmento.h"
#include "Circulo.h"
#include "Conjunto.h"

using namespace std;

int main()
{
    cout<<"Prueba de punto"<<endl;
    Punto p1(1,2);
    Punto p2(3,4);
    cout<<"Coordenadas del punto 1 ("<<p1.coordx()<<","<<p1.coordY()<<")"<<endl;
    cout<<"Coordenadas del punto 2 ("<<p2.coordx()<<","<<p2.coordY()<<")"<<endl;
    if(p1==p2)
        cout<<"Los puntos son iguales"<<endl;
    else
        cout<<"Los puntos son distintos"<<endl;
    cout<<"La distancia entre los puntos es "<<p1.distancia(p2)<<endl;
    p1.modificarPunto(3,4);
    if(p1==p2)
        cout<<"Con puntos modificados ahora son iguales"<<endl;
    else
        cout<<"con puntos modificados siguen distintos"<<endl;
    p1.modificarPunto(1,2);

    Segmento s(p1,p2);
    cout<<"Prueba de segmento"<<endl;
    cout<<"Longitud del segmento "<<s.longitud()<<endl;

    Circulo c(p1,s);
    cout<<"Prueba de circulo"<<endl;
    cout<<"radio "<<c.radio()<<", perimetro "<<c.perimetro()<<", area "<<c.area()<<endl;

    Conjunto <int> conjunto1,conjunto2;
    cout<<"Prueba de conjunto"<<endl;
    conjunto1.agregarElemento(1);
    conjunto1.agregarElemento(2);
    conjunto1.agregarElemento(3);
    conjunto1.agregarElemento(4);
    conjunto1.agregarElemento(5);
    conjunto1.agregarElemento(5);
    conjunto1.eliminarElemento(4);
    conjunto1.eliminarElemento(5);
    int cantElem=conjunto1.cantidadElementos();
    int arrConjunto[cantElem];
    conjunto1.devolverConjunto(arrConjunto,cantElem);
    cout<<"Elementos en el conjunto 1: "<<endl;
    for(int i=0;i<cantElem;i++)
        cout<<arrConjunto[i];
    cout<<endl;
    conjunto2.agregarElemento(4);
    conjunto2.agregarElemento(2);
    conjunto2.agregarElemento(3);
    conjunto2.devolverConjunto(arrConjunto,cantElem);
    cout<<"Elementos en el conjunto 2: "<<endl;
    for(int i=0;i<cantElem;i++)
        cout<<arrConjunto[i];
    cout<<endl;
    conjunto1.unionConjuntos(conjunto2);
    conjunto1.devolverConjunto(arrConjunto,cantElem);
    cout<<"Elementos de union: "<<endl;
    for(int i=0;i<cantElem;i++)
        cout<<arrConjunto[i];
    cout<<endl;
    return 0;
}
