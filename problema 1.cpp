
#include <iostream>
using namespace std;

int main() {
    float calificaciones[6];
    float suma = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Ingresa la calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    calificaciones[5] = suma / 5;

    cout << "\nCalificaciones ingresadas:\n";

    for (int i = 0; i < 5; i++) {
        cout << calificaciones[i] << endl;
    }

    cout << "Promedio: " << calificaciones[5] << endl;

    return 0;
}