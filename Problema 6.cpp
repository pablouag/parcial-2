
#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string matricula;
    float calif[3];
};

int main() {
    Alumno alumnos[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nAlumno " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin >> ws, alumnos[i].nombre);

        cout << "Matricula: ";
        cin >> alumnos[i].matricula;

        for (int j = 0; j < 3; j++) {
            cout << "Calificacion " << j + 1 << ": ";
            cin >> alumnos[i].calif[j];
        }
    }

    cout << "\nReporte de alumnos:\n";

    for (int i = 0; i < 5; i++) {
        float suma = 0;

        for (int j = 0; j < 3; j++) {
            suma += alumnos[i].calif[j];
        }

        float promedio = suma / 3;

        cout << "\nNombre: " << alumnos[i].nombre << endl;
        cout << "Matricula: " << alumnos[i].matricula << endl;
        cout << "Promedio: " << promedio << endl;
    }

    return 0;
}