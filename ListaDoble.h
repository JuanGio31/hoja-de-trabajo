#pragma
class ListaDoble
{
private:
    struct NodoDoble
    {
        int valor;
        NodoDoble *siguiente;
        NodoDoble *anterior;

        NodoDoble(int _valor)
        {
            this->valor = _valor;
            this->siguiente = nullptr;
            this->anterior = nullptr;
        };
    } *inicio, *ultimo;

    int longitud;

public:
    ListaDoble();
    ~ListaDoble();
    void insertarInicio(int valor);
    void insertarFinal(int valor);
    void eliminarInicio();
    void eliminarFinal();
    bool buscar(int valor);
    void convertirEnCircular();
    bool vacia() const;
};
