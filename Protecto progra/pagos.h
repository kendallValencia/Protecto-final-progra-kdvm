#pragma once
#include "nodo.h"
#include <iostream>

class pagos {
private:
    nododoble* cabeza;

public:
    pagos();

    void insertar(const char nombre[], int id);
    void eliminar(int id);
    void buscar(int id);
    void mostrar();
};