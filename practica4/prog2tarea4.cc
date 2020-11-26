#include <iostream>
using namespace std;

int main() {
    double longitud;
    int costemetro = 1624;
    cout << "Introduzca la cantidad de metros de longitud de la carretera: ";
    cin >> longitud;
    cout << "Si la carretera tiene " << longitud << " metros de longitud, y el coste por "
    "metro es de " << costemetro << " euros, el coste total de la carretera sera de " << 
    longitud*costemetro << " euros.";

}