#pragma once
#include "nodo.h"
#include <iostream>
#include <fstream>

class clientes {
private:
    nododoble* cabeza;

public:
    clientes();

    void insertar(const char nombre[], int id);
    void eliminar(int id);
    void buscar(int id);
    void mostrar();

    void guardar_en_archivo();
    void leer_archivo();
};