
#include <iostream>
using namespace std;

int main() {
    int numeros[3] = { 10, 20, 30 };

    cout << "Numeros del arreglo:\n";

    for (int i = 0; i < 3; i++) {
        cout << numeros[i] << endl;
    }

    cout << "Arreglo mostrado correctamente.\n";

    return 0;
}