// Protecto progra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "lista.h"
#include <iostream>
using namespace std;

int main() {
    cout << "lista doblemente enlazada simple\n";
    lista l;
    int opcion;

    do {
        cout << "\n1. insertar\n";
        cout << "2. eliminar\n";
        cout << "3. buscar\n";
        cout << "4. mostrar\n";
        cout << "5. salir\n";
        cout << "elige opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int valor;
            cout << "valor: ";
            cin >> valor;
            l.insertar(valor);
        }
        else if (opcion == 2) {
            int valor;
            cout << "valor a eliminar: ";
            cin >> valor;
            l.eliminar(valor);
        }
        else if (opcion == 3) {
            int valor;
            cout << "valor a buscar: ";
            cin >> valor;
            l.buscar(valor);
        }
        else if (opcion == 4) {
            l.mostrar();
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
