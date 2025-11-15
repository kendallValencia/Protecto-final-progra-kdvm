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
            cout << "\n1. insertar\n2. eliminar\n3. buscar\n4. mostrar\n5. guardar en archivo\n6. leer archivo\n";
            cout << "elige accion: ";
            cin >> accion;
            if (accion == 1) {
                char nombre[50];
                int id;
                cout << "nombre: ";
                cin.ignore();
                cin.getline(nombre, 50);
                cout << "id: ";
                cin >> id;
                prod.insertar(nombre, id);
            }
            else if (accion == 2) {
                int id;
                cout << "id: ";
                cin >> id;
                prod.eliminar(id);
            }
            else if (accion == 3) {
                int id;
                cout << "id: ";
                cin >> id;
                prod.buscar(id);
            }
            else if (accion == 4) {
                prod.mostrar();
            }
            else if (accion == 5) {
                prod.guardar_en_archivo();
            }
            else if (accion == 6) {
                prod.leer_archivo();
            }
            else {
                cout << "accion invalida.\n";
            }
        }
        else if (opcion == 2) {
            int accion;
            cout << "\n1. insertar\n2. eliminar\n3. buscar\n4. mostrar\n5. guardar en archivo\n6. leer archivo\n";
            cout << "elige accion: ";
            cin >> accion;
            if (accion == 1) {
                char nombre[50];
                int id;
                cout << "nombre: ";
                cin.ignore();
                cin.getline(nombre, 50);
                cout << "id: ";
                cin >> id;
                cli.insertar(nombre, id);
            }
            else if (accion == 2) {
                int id;
                cout << "id: ";
                cin >> id;
                cli.eliminar(id);
            }
            else if (accion == 3) {
                int id;
                cout << "id: ";
                cin >> id;
                cli.buscar(id);
            }
            else if (accion == 4) {
                cli.mostrar();
            }
            else if (accion == 5) {
                cli.guardar_en_archivo();
            }
            else if (accion == 6) {
                cli.leer_archivo();
            }
            else {
                cout << "accion invalida.\n";
            }
        }
        else if (opcion == 3) {
            int accion;
            cout << "\n1. insertar\n2. eliminar\n3. buscar\n4. mostrar\n5. guardar en archivo\n6. leer archivo\n";
            cout << "elige accion: ";
            cin >> accion;
            if (accion == 1) {
                char nombre[50];
                int id;
                cout << "nombre: ";
                cin.ignore();
                cin.getline(nombre, 50);
                cout << "id: ";
                cin >> id;
                ped.insertar(nombre, id);
            }
            else if (accion == 2) {
                int id;
                cout << "id: ";
                cin >> id;
                ped.eliminar(id);
            }
            else if (accion == 3) {
                int id;
                cout << "id: ";
                cin >> id;
                ped.buscar(id);
            }
            else if (accion == 4) {
                ped.mostrar();
            }
            else if (accion == 5) {
                ped.guardar_en_archivo();
            }
            else if (accion == 6) {
                ped.leer_archivo();
            }
            else {
                cout << "accion invalida.\n";
            }
        }
        else if (opcion == 4) {
            int accion;
            cout << "\n1. insertar\n2. eliminar\n3. buscar\n4. mostrar\n5. estadisticas\n6. guardar en archivo\n7. leer archivo\n";
            cout << "elige accion: ";
            cin >> accion;
            if (accion == 1) {
                char nombre[50];
                int monto;
                cout << "descripcion: ";
                cin.ignore();
                cin.getline(nombre, 50);
                cout << "monto: ";
                cin >> monto;
                pag.insertar(nombre, monto);
            }
            else if (accion == 2) {
                int monto;
                cout << "monto: ";
                cin >> monto;
                pag.eliminar(monto);
            }
            else if (accion == 3) {
                int monto;
                cout << "monto: ";
                cin >> monto;
                pag.buscar(monto);
            }
            else if (accion == 4) {
                pag.mostrar();
            }
            else if (accion == 5) {
                cout << "cantidad total de pagos: " << pag.cantidad_total() << "\n";
                cout << "monto total: " << pag.monto_total() << "\n";
                cout << "promedio: " << pag.promedio() << "\n";
            }
            else if (accion == 6) {
                pag.guardar_en_archivo();
            }
            else if (accion == 7) {
                pag.leer_archivo();
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