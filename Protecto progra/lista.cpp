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

void lista::guardar_en_archivo(const char nombre_archivo[]) {
    ofstream archivo(nombre_archivo);
    if (!archivo.is_open()) {
        cout << "no se pudo abrir " << nombre_archivo << " para guardar.\n";
        return;
    }

    nododoble* actual = cabeza;
    while (actual != nullptr) {
        archivo << actual->id << "\n";
        archivo << actual->nombre << "\n";
        actual = actual->siguiente;
    }
    archivo.close();
    cout << "datos guardados en " << nombre_archivo << ".\n";
}

void lista::cargar_de_archivo(const char nombre_archivo[]) {
    ifstream archivo(nombre_archivo);
    if (!archivo.is_open()) {
        cout << "no se encontro " << nombre_archivo << ", se inicia vacio.\n";
        return;
    }

    int id;
    char nombre[50];
    while (archivo >> id) {
        archivo.ignore();
        archivo.getline(nombre, 50);
        insertar(nombre, id);
    }
    archivo.close();
    cout << "datos cargados de " << nombre_archivo << ".\n";
}