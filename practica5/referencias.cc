#include <iostream>

int main() {
    int variable_1 = {1};
    double variable_2 {2};
    bool variable_3 (true);
    char variable_4 = 'x';

    int& pepe = variable_1;
    double& grillo = variable_2;
    bool& hola = variable_3;
    char& viva = variable_4;

    std::cout << "Este programa imprimirá en pantalla el valor de diferentes referencias "
    "dadas por el programador:" << std::endl;
    std::cout << pepe << std::endl;
    std::cout << grillo << std::endl;
    std::cout << hola << std::endl;
    std::cout << viva << std::endl;

    return 0;
}