
#include <iostream>
using namespace std;

int main() {
    float alumnos[10][3];

    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << i + 1 << endl;

        cout << "Promedio del grupo A: ";
        cin >> alumnos[i][0];

        cout << "Promedio del grupo B: ";
        cin >> alumnos[i][1];

        if (alumnos[i][0] > alumnos[i][1]) {
            alumnos[i][2] = alumnos[i][0];
        }
        else {
            alumnos[i][2] = alumnos[i][1];
        }
    }

    cout << "\nResultados de los alumnos:\n";

    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << i + 1
            << " | Grupo A: " << alumnos[i][0]
            << " | Grupo B: " << alumnos[i][1]
            << " | Mayor: " << alumnos[i][2] << endl;
    }

    return 0;
}