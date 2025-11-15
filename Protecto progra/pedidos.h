#pragma once
#include "nodo.h"
#include <iostream>
#include <fstream>

class pedidos {
private:
    nododoble* cabeza;

public:
    pedidos();

    void insertar(const char nombre[], int id);
    void eliminar(int id);
    void buscar(int id);
    void mostrar();

    void guardar_en_archivo();
    void leer_archivo();
};