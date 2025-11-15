#pragma once
#include "nodo.h"
#include <iostream>

class productos {
private:
    nododoble* cabeza;

public:
    productos();

    void insertar(const char nombre[], int id);
    void eliminar(int id);
    void buscar(int id);
    void mostrar();
};