#pragma once
#include "nodo.h"
#include <iostream>
#include <fstream>

class pagos {
private:
    nododoble* cabeza;

public:
    pagos();

    void insertar(const char descripcion[], int monto);
    void eliminar(int monto);
    void buscar(int monto);
    void mostrar();

    int cantidad_total();
    int monto_total();
    int promedio();

    void guardar_en_archivo();
    void leer_archivo();
};