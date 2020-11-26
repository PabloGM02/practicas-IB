#include <iostream>
using namespace std;

int main() {
    double longitudlado;
    cout << "Introduzca la longitud del lado de su cuadrado: ";
    cin >> longitudlado;
    cout << "Si el lado de su cuadrado mide " << longitudlado <<
    " centímetros, el área de ese cuadrado será de " << longitudlado*longitudlado <<
    " centímetros cuadrados" << endl << ", y su perímetro será de " 
    << longitudlado+longitudlado+longitudlado+longitudlado << " centímetros";

}