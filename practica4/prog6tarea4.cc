#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int x_1 = 2;
    int y_1 = 3;
    int z_1 = 1;
    int x_2 = 4;
    int y_2 = 1;
    int z_2 = 3;
    cout << "A = (2, 3, 1)" << endl;
    cout << "B = (4, 1, 3)" << endl;
    cout << "La distancia entre 2 puntos A y B compuestos por coordenadas ya definidas "
    "es igual a: " << sqrt((x_2-x_1)^2 + (y_2-y_1)^2 + (z_2-z_1)^2);
}