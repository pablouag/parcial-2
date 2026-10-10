#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int ventas[100];
    int suma = 0;

    srand(time(0));

    for (int i = 0; i < 100; i++) {
        ventas[i] = rand() % 1000 + 1;
        suma += ventas[i];

        cout << "Venta " << i + 1 << ": " << ventas[i] << endl;
    }

    cout << "\nLa suma total de las ventas es: " << suma << endl;

    return 0;
}