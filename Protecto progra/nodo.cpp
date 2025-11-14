#include "nodo.h"

void copiar(char destino[], const char origen[]) {
    int i = 0;
    while (origen[i] != '\0' && i < 49) {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}

nododoble::nododoble(const char n[], int valor) {
    copiar(nombre, n);
    id = valor;
    siguiente = nullptr;
    anterior = nullptr;
}