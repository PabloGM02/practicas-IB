#include <iostream>
#include <cmath>

int main () {
    std::cout << "Este programa imprimirá en pantalla la cantidad de memoria que se utiliza "
    "para almacenar cada uno de los tipos básicos del lenguaje." << std::endl;
    std::cout << "El tipo de datos char se representa utilizando " << sizeof (char) << " bytes." << 
    std::endl;
    std::cout << "El tipo de datos int se representa utilizando " << sizeof (int) << " bytes." << 
    std::endl;
    std::cout << "El tipo de datos float se representa utilizando " << sizeof (float) << " bytes." << 
    std::endl;
    std::cout << "El tipo de datos double se representa utilizando " << sizeof (double) << " bytes." << 
    std::endl;

    return 0;
}