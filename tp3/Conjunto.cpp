#include "Conjunto.h"

template <typename E> Conjunto<E>::Conjunto()
{
    this->primero=nullptr;//ctor
}
template <typename E> void Conjunto<E>::agregarElemento(const E & elemento)
{
    if(!this->existeElemento(elemento))
    {
        Nodo*aux=new Nodo;
        aux->elemento=elemento;
        aux->siguiente=primero;
        primero=aux;
    }
}
template <typename E> bool Conjunto<E>::conjuntoVacio()const
{
    return primero==nullptr;
}
template <typename E> bool Conjunto<E>::existeElemento(const E & elemento)const
{
    if(!conjuntoVacio())
    {
        Nodo*aux=primero;
        while(aux!=nullptr)
        {
            if(aux->elemento==elemento)
                return true;
            aux=aux->siguiente;
        }
        return false;
    }
    else
        return false;
}
template <typename E> bool Conjunto<E>::operator==(Conjunto & otroConjunto)const
{
    //revisar axiomas
}
template <typename E> int Conjunto<E>::cantidadElementos()const
{
    int cont=0;
    Nodo*aux=primero;
    while(aux!=nullptr)
    {
        cont++;
        aux=aux->siguiente;
    }
    return cont;
}
template <typename E> void Conjunto<E>::devolverConjunto(E*arrConjunto, int cantElem)
{
    Nodo*aux=primero;
    for(int i=0;i<cantElem;i++)
    {
        arrConjunto[i]=aux->elemento;
        aux=aux->siguiente;
    }
}
template <typename E> void Conjunto<E>::eliminarElemento(const E & elemento)
{
    if(existeElemento(elemento))
    {
        Nodo*aEliminar=nullptr;
        Nodo*aux=primero;
        if(aux->elemento==elemento)
        {
            aEliminar=aux;
            primero=primero->siguiente;
        }
        while(aEliminar==nullptr)
        {
            if(aux->siguiente->elemento==elemento)
            {
                aEliminar=aux->siguiente;
                aux->siguiente=aEliminar->siguiente;
            }
            else
                aux=aux->siguiente;
        }
        delete aEliminar;
    }
}
template <typename E> void Conjunto<E>::unionConjuntos(Conjunto & otroCojunto)//Con errores
{
    Nodo*aux=otroCojunto.primero;
    while(aux!=nullptr)
    {
        this->agregarElemento(aux->elemento);
        aux=aux->siguiente;
    }
}
template <typename E> void Conjunto<E>::interseccionConjuntos(Conjunto & otroConjunto)//Con errores
{
    Nodo*aux=primero;
    while(aux!=nullptr)
    {
        if(!otroConjunto.existeElemento(aux->elemento))
            eliminarElemento(aux->elemento);
        aux=aux->siguiente;
    }
}
template <typename E> Conjunto<E>::~Conjunto()
{
    Nodo*aux=primero;//dtor
    while(primero!=nullptr)
    {
        aux=primero;
        primero=aux->siguiente;
        delete aux;
    }
}
template class Conjunto<int>;
