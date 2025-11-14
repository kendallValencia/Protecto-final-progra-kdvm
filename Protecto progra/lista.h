#pragma once
#include "nodo.h"
#include <iostream>

class lista {
private:
    nododoble* cabeza;

public:
    lista();

    void insertar(int valor);
    void eliminar(int valor);
    void buscar(int valor);
    void mostrar();
};