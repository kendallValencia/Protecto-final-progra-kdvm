#pragma once
#include "nodo.h"
#include <iostream>
#include <fstream>

class lista {
private:
    nododoble* cabeza;

public:
    lista();

    void insertar(const char nombre[], int id);
    void eliminar(int id);
    void buscar(int id);
    void mostrar();

    void guardar_en_archivo(const char nombre_archivo[]);
    void cargar_de_archivo(const char nombre_archivo[]);
};