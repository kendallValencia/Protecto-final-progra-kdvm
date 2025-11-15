#include "pagos.h"
#include <iostream>
using namespace std;

pagos::pagos() {
    cabeza = nullptr;
}

void pagos::insertar(const char descripcion[], int monto) {
    nododoble* nuevo = new nododoble(descripcion, monto); 
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
    cout << "pago insertado.\n";
}

void pagos::eliminar(int monto) {
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        if (actual->id == monto) {
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
            cout << "pago eliminado.\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "pago no encontrado.\n";
}

void pagos::buscar(int monto) {
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        if (actual->id == monto) {
            cout << "encontrado: " << actual->nombre << " (monto: " << actual->id << ")\n";
            return;
        }
        actual = actual->siguiente;
    }
    cout << "pago no encontrado.\n";
}

void pagos::mostrar() {
    cout << "\n--- pagos ---\n";
    if (cabeza == nullptr) {
        cout << "no hay pagos.\n";
        return;
    }
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        cout << "descripcion: " << actual->nombre << ", monto: " << actual->id << "\n";
        actual = actual->siguiente;
    }
}



int pagos::cantidad_total() {
    int contador = 0;
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        contador++;
        actual = actual->siguiente;
    }
    return contador;
}

int pagos::monto_total() {
    int total = 0;
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        total += actual->id;
        actual = actual->siguiente;
    }
    return total;
}

int pagos::promedio() {
    int cant = cantidad_total();
    if (cant == 0) return 0;
    return monto_total() / cant;
}