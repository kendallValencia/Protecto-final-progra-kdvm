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

void productos::guardar_en_archivo() {
    ofstream archivo("productos.txt");
    if (!archivo) {
        cout << "no se pudo crear el archivo\n";
        return;
    }

    archivo << "productos\n";
    nododoble* actual = cabeza;
    while (actual != nullptr) {
        archivo << actual->id << " - " << actual->nombre << "\n";
        actual = actual->siguiente;
    }
    archivo.close();
    cout << "guardado en productos.txt\n";
}

void productos::leer_archivo() {
    ifstream archivo("productos.txt");
    if (!archivo) {
        cout << "no se pudo abrir el archivo\n";
        return;
    }

    char linea[100];
    while (archivo.getline(linea, 100)) {
        cout << linea << "\n";
    }
    archivo.close();
}