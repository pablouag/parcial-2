
#include <iostream>
using namespace std;

void intercambiar(int& a, int& b) {
    int temporal = a;
    a = b;
    b = temporal;
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "\nAntes del intercambio:\n";
    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;

    intercambiar(num1, num2);

    cout << "\nDespues del intercambio:\n";
    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;

    return 0;
}