// Protecto progra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "productos.h"
#include "clientes.h"
#include "pedidos.h"
#include "pagos.h"
#include <iostream>
using namespace std;

int main() {
    cout << "sistema simple\n";

    productos prod;
    clientes cli;
    pedidos ped;
    pagos pag;

    int opcion;
    do {
        cout << "\n=== menu ===\n";
        cout << "1. productos\n";
        cout << "2. clientes\n";
        cout << "3. pedidos\n";
        cout << "4. pagos\n";
        cout << "5. salir\n";
        cout << "elige opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int accion;
            cout << "\n1. insertar\n2. eliminar\n3. buscar\n4. mostrar\n";
            cout << "elige accion: ";
            cin >> accion;
            if (accion == 1) {
                char nombre[50]; int id;
                cout << "nombre: "; cin.ignore(); cin.getline(nombre, 50);
                cout << "id: "; cin >> id;
                prod.insertar(nombre, id);
            }
            else if (accion == 2) {
                int id; cout << "id: "; cin >> id; prod.eliminar(id);
            }
            else if (accion == 3) {
                int id; cout << "id: "; cin >> id; prod.buscar(id);
            }
            else if (accion == 4) {
                prod.mostrar();
            }
            else {
                cout << "accion invalida.\n";
            }
        }
        else if (opcion == 2) {
            int accion;
            cout << "\n1. insertar\n2. eliminar\n3. buscar\n4. mostrar\n";
            cout << "elige accion: ";
            cin >> accion;
            if (accion == 1) {
                char nombre[50]; int id;
                cout << "nombre: "; cin.ignore(); cin.getline(nombre, 50);
                cout << "id: "; cin >> id;
                cli.insertar(nombre, id);
            }
            else if (accion == 2) {
                int id; cout << "id: "; cin >> id; cli.eliminar(id);
            }
            else if (accion == 3) {
                int id; cout << "id: "; cin >> id; cli.buscar(id);
            }
            else if (accion == 4) {
                cli.mostrar();
            }
            else {
                cout << "accion invalida.\n";
            }
        }
        else if (opcion == 3) {
            int accion;
            cout << "\n1. insertar\n2. eliminar\n3. buscar\n4. mostrar\n";
            cout << "elige accion: ";
            cin >> accion;
            if (accion == 1) {
                char nombre[50]; int id;
                cout << "nombre: "; cin.ignore(); cin.getline(nombre, 50);
                cout << "id: "; cin >> id;
                ped.insertar(nombre, id);
            }
            else if (accion == 2) {
                int id; cout << "id: "; cin >> id; ped.eliminar(id);
            }
            else if (accion == 3) {
                int id; cout << "id: "; cin >> id; ped.buscar(id);
            }
            else if (accion == 4) {
                ped.mostrar();
            }
            else {
                cout << "accion invalida.\n";
            }
        }
        else if (opcion == 4) {
            int accion;
            cout << "\n1. insertar\n2. eliminar\n3. buscar\n4. mostrar\n";
            cout << "elige accion: ";
            cin >> accion;
            if (accion == 1) {
                char nombre[50]; int id;
                cout << "nombre: "; cin.ignore(); cin.getline(nombre, 50);
                cout << "id: "; cin >> id;
                pag.insertar(nombre, id);
            }
            else if (accion == 2) {
                int id; cout << "id: "; cin >> id; pag.eliminar(id);
            }
            else if (accion == 3) {
                int id; cout << "id: "; cin >> id; pag.buscar(id);
            }
            else if (accion == 4) {
                pag.mostrar();
            }
            else {
                cout << "accion invalida.\n";
            }
        }
        else if (opcion != 5) {
            cout << "opcion invalida.\n";
        }
    } while (opcion != 5);

    cout << "fin del programa.\n";
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
