#pragma once
#include "nodo.h"
#include <iostream>

class clientes {
private:
    nododoble* cabeza;

public:
    clientes();

    void insertar(const char nombre[], int id);
    void eliminar(int id);
    void buscar(int id);
    void mostrar();
};