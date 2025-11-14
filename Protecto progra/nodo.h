#pragma once

class nododoble {
public:
    char nombre[50];
    int id;
    nododoble* siguiente;
    nododoble* anterior;

    nododoble(const char nombre[], int valor);
};