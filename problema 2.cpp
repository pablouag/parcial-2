
#include <iostream>
using namespace std;

int main() {
    float grupoA[5];
    float grupoB[5];
    float mayores[5];

    cout << "Promedios del grupo A:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Alumno " << i + 1 << ": ";
        cin >> grupoA[i];
    }

    cout << "\nPromedios del grupo B:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Alumno " << i + 1 << ": ";
        cin >> grupoB[i];
    }

    cout << "\nResultados:\n";

    for (int i = 0; i < 5; i++) {
        if (grupoA[i] > grupoB[i]) {
            mayores[i] = grupoA[i];
        }
        else {
            mayores[i] = grupoB[i];
        }

        cout << "Alumno " << i + 1
            << ": Grupo A = " << grupoA[i]
            << ", Grupo B = " << grupoB[i]
            << ", Mayor = " << mayores[i] << endl;
    }

    return 0;
}