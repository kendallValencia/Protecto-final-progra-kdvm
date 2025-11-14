#include "lista.h"
#include <iostream>
using namespace std;

lista::lista() {
    cabeza = nullptr;
}

void lista::insertar(const char nombre[], int id) {
    nododoble* nuevo = new nododoble(nombre, id);

    if (cabeza == nullptr) {
        cabeza = nuevo;
    }
    else {
        nododoble* actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
        nuevo->anterior = actual;
    }
    cout << "registro insertado.\n";
}

void lista::eliminar(int id) {
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        if (actual->id == id) {
            if (actual->anterior != nullptr) {
                actual->anterior->siguiente = actual->siguiente;
            }
            else {
                cabeza = actual->siguiente;
            }
            if (actual->siguiente != nullptr) {
                actual->siguiente->anterior = actual->anterior;
            }
            delete actual;
            cout << "registro eliminado.\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "registro no encontrado.\n";
}

void lista::buscar(int id) {
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        if (actual->id == id) {
            cout << "encontrado: " << actual->nombre << " (id: " << actual->id << ")\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "registro no encontrado.\n";
}

void lista::mostrar() {
    cout << "\n--- registros ---\n";
    if (cabeza == nullptr) {
        cout << "no hay registros.\n";
        return;
    }
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        cout << "nombre: " << actual->nombre << ", id: " << actual->id << "\n";
        actual = actual->siguiente;
    }
}