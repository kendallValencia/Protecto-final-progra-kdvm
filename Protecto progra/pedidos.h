#pragma once
#include "nodo.h"
#include <iostream>

class pedidos {
private:
    nododoble* cabeza;

public:
    pedidos();

    void insertar(const char nombre[], int id);
    void eliminar(int id);
    void buscar(int id);
    void mostrar();
};