#include "pedidos.h"
#include <iostream>
using namespace std;

pedidos::pedidos() {
    cabeza = nullptr;
}

void pedidos::insertar(const char nombre[], int id) {
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
    cout << "pedido insertado.\n";
}

void pedidos::eliminar(int id) {
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
            cout << "pedido eliminado.\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "pedido no encontrado.\n";
}

void pedidos::buscar(int id) {
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        if (actual->id == id) {
            cout << "encontrado: " << actual->nombre << " (id: " << actual->id << ")\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "pedido no encontrado.\n";
}

void pedidos::mostrar() {
    cout << "\n--- pedidos ---\n";
    if (cabeza == nullptr) {
        cout << "no hay pedidos.\n";
        return;
    }
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        cout << "nombre: " << actual->nombre << ", id: " << actual->id << "\n";
        actual = actual->siguiente;
    }
}