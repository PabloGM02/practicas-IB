#include <iostream>
using namespace std;

int main() {
    double alumno1;
    double alumno2;
    double alumno3;
    cout << "Introduzca la media del alumno 1: ";
    cin >> alumno1;
    cout << "Introduzca la media del alumno 2: ";
    cin >> alumno2;
    cout << "Introduzca la media del alumno 3: ";
    cin >> alumno3;
    cout << "La nota media de estos 3 alumnos en Inf."
    " Básica es de " << (alumno1+alumno2+alumno3)/3 << " sobre 10.";



}