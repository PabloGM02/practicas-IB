#include <iostream>
using namespace std;

int main() {
    double cent1 = 0.01;
    double cent5 = 0.05;
    double cent10 = 0.10;
    double cent20 = 0.20;
    int euros5 = 5;
    int euros10 = 10;
    int euros20 = 20;
    int euros50 = 50;
    int euros100 = 100;
    int euros200 = 200;
    int euros500 = 500;
    int monedas1cent;
    int monedas5cent;
    int monedas10cent;
    int monedas20cent;
    int billetes5;
    int billetes10;
    int billetes20;
    int billetes50;
    int billetes100;
    int billetes200;
    int billetes500;
    cout << "Número de monedas de 1 céntimo: ";
    cin >>  monedas1cent;
    cout << "Número de monedas de 5 céntimos: ";
    cin >> monedas5cent;
    cout << "Número de monedas de 10 céntimos: ";
    cin >>  monedas10cent;
    cout << "Número de monedas de 20 céntimos: ";
    cin >>  monedas20cent;
    cout << "Número de billetes de 5 euros: ";
    cin >> billetes5;
    cout << "Número de billetes de 10 euros: ";
    cin >> billetes10;
    cout << "Número de billetes de 20 euros: ";
    cin >> billetes20;
    cout << "Número de billetes de 50 euros: ";
    cin >> billetes50;
    cout << "Número de billetes de 100 euros: ";
    cin >> billetes100;
    cout << "Número de billetes de 200 euros: ";
    cin >> billetes200;
    cout << "Número de billetes de 500 euros: ";
    cin >> billetes500;

    cout << "Usted dispone en total de: " << cent1*monedas1cent + cent5*monedas5cent + 
    cent10*monedas10cent + cent20*monedas20cent + euros5*billetes5 + euros10*billetes10 +
    euros20*billetes20 + euros50*billetes50 + euros100*billetes100 + euros200*billetes200 +
    euros500*billetes500 << " euros.";



}