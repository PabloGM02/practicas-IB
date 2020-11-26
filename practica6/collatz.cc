#include <iostream>
using namespace std;

int main () {
   
    int numero;
    cout << "Este programa imprimirá la secuencia de Collatz del número que usted desee" << endl;
    cout << "Introduzca un número: ";
    cin >> numero;

    while ( numero != 1 ){
        if ( numero % 2 == 1) {
            numero = (3 * numero) + 1;
        }
        else{
            numero /= 2;
        }
    
    cout << numero << " ";
    }
    
    return 0;
}