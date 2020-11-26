#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Este programa imprimirá en pantalla los divisores de un número." << '\n';
    cout << "Introduzca un número: ";
    cin >> numero;
    
    for (int divisor =1; divisor<=numero; ++divisor) { 
        if (numero%divisor == 0) {
            cout << divisor << ",";
        }
    }
    return 0;

}