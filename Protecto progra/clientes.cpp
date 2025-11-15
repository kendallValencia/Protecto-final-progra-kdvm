#include "clientes.h"
#include <iostream>
using namespace std;

clientes::clientes() {
    cabeza = nullptr;
}

void clientes::insertar(const char nombre[], int id) {
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
    cout << "cliente insertado.\n";
}

void clientes::eliminar(int id) {
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
            cout << "cliente eliminado.\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "cliente no encontrado.\n";
}

void clientes::buscar(int id) {
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        if (actual->id == id) {
            cout << "encontrado: " << actual->nombre << " (id: " << actual->id << ")\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "cliente no encontrado.\n";
}

void clientes::mostrar() {
    cout << "\n--- clientes ---\n";
    if (cabeza == nullptr) {
        cout << "no hay clientes.\n";
        return;
    }
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        cout << "nombre: " << actual->nombre << ", id: " << actual->id << "\n";
        actual = actual->siguiente;
    }
}