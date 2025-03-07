#include "ListaDoble.h"

ListaDoble::ListaDoble()
{
    this->longitud = 0;
    this->inicio = nullptr;
    this->ultimo = nullptr;
}

ListaDoble::~ListaDoble()
{
    while (!vacia())
    {
        eliminarInicio();
    }
}

void ListaDoble::insertarInicio(int valor)
{
    auto *nuevo = new NodoDoble(valor);
    nuevo->siguiente = inicio;
    if (inicio != nullptr)
        inicio->anterior = nuevo;
    inicio = nuevo;
}

void ListaDoble::insertarFinal(int valor)
{
    if (vacia())
    {
        auto *nuevo = new NodoDoble(valor);
        inicio = nuevo;
        ultimo = nuevo;
    }
    else
    {
        auto *nuevo = new NodoDoble(valor);
        ultimo->siguiente = nuevo;
        nuevo->anterior = ultimo;
        ultimo = nuevo;
    }
    longitud++;
}

void ListaDoble::eliminarInicio()
{
    if (vacia())
    {
        throw "La lista esta vacia";
    }
    if (longitud == 1)
    {
        inicio = nullptr;
        ultimo = nullptr;
    }
    else
    {
        NodoDoble *aux = inicio->siguiente;
        aux->anterior = nullptr;
        inicio = aux;
    }
    longitud--;
}

void ListaDoble::eliminarFinal()
{
    if (vacia())
    {
        throw "Error-> La lista esta vacia!";
    }
    if (longitud == 1)
    {
        inicio = nullptr;
        ultimo = nullptr;
    }
    else
    {
        NodoDoble *aux = ultimo->anterior;
        aux->siguiente = nullptr;
        ultimo = aux;
    }
    longitud--;
}

bool ListaDoble::buscar(int valor)
{
    
    return false;
}

void ListaDoble::convertirEnCircular()
{
    this->inicio->anterior = ultimo;
    this->ultimo->siguiente = inicio;
}

bool ListaDoble::vacia() const
{
    return this->longitud == 0;
}
