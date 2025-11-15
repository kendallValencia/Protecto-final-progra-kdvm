#pragma once
#include "nodo.h"
#include <iostream>

class pagos {
private:
    nododoble* cabeza;

public:
    pagos();

    void insertar(const char descripcion[], int monto); // monto en lugar de id
    void eliminar(int monto);
    void buscar(int monto);
    void mostrar();

   
    int cantidad_total();
    int monto_total();
    int promedio();
};