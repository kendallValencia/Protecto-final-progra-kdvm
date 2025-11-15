#include "productos.h"
#include <iostream>
using namespace std;

productos::productos() {
    cabeza = nullptr;
}

void productos::insertar(const char nombre[], int id) {
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
    cout << "producto insertado.\n";
}

void productos::eliminar(int id) {
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
            cout << "producto eliminado.\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "producto no encontrado.\n";
}

void productos::buscar(int id) {
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        if (actual->id == id) {
            cout << "encontrado: " << actual->nombre << " (id: " << actual->id << ")\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "producto no encontrado.\n";
}

void productos::mostrar() {
    cout << "\n--- productos ---\n";
    if (cabeza == nullptr) {
        cout << "no hay productos.\n";
        return;
    }
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        cout << "nombre: " << actual->nombre << ", id: " << actual->id << "\n";
        actual = actual->siguiente;
    }
}