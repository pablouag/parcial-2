
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool tieneNumeros(string texto) {
    for (int i = 0; i < texto.length(); i++) {
        if (isdigit(static_cast<unsigned char>(texto[i]))) {
            return true;
        }
    }

    return false;
}

int main() {
    string nombreCompleto;
    string nombre;
    string apellido;

    cout << "Ingresa tu nombre y apellido: ";
    getline(cin, nombreCompleto);

    int espacio = nombreCompleto.find(' ');

    if (espacio == string::npos ||
        espacio == 0 ||
        espacio == nombreCompleto.length() - 1) {
        cout << "Error: ingresa un nombre y un apellido.\n";
        return 0;
    }

    nombre = nombreCompleto.substr(0, espacio);
    apellido = nombreCompleto.substr(espacio + 1);

    if (tieneNumeros(nombre) || tieneNumeros(apellido)) {
        cout << "Error: el nombre y el apellido no deben "
            << "contener numeros.\n";
    }
    else {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
    }

    return 0;
}