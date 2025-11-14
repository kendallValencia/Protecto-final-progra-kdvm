#pragma once
#include "nodo.h"
#include <iostream>

class lista {
private:
    nododoble* cabeza;

public:
    lista();

    void insertar(const char nombre[], int id);
    void eliminar(int id);
    void buscar(int id);
    void mostrar();
};