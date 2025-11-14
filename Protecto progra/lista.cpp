#include "lista.h"
#include <iostream>
using namespace std;

lista::lista() {
    cabeza = nullptr;
}

void lista::insertar(int valor) {
    nododoble* nuevo = new nododoble(valor);

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
    cout << "dato insertado.\n";
}

void lista::eliminar(int valor) {
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        if (actual->dato == valor) {
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
            cout << "dato eliminado.\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "dato no encontrado.\n";
}

void lista::buscar(int valor) {
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        if (actual->dato == valor) {
            cout << "encontrado: " << actual->dato << "\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "dato no encontrado.\n";
}

void lista::mostrar() {
    cout << "\n--- lista ---\n";
    if (cabeza == nullptr) {
        cout << "lista vacia.\n";
        return;
    }
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    cout << "\n";
}