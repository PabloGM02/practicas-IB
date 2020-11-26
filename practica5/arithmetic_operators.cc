#include <iostream>
#include <cmath>

int main() {
    int var_1 = 4;
    int var_2 = 3;
    double var_3 = 2.5;
    double var_4 = 6.25;

    std::cout << "Este programa imprimirá en pantalla el resultado de operar variables con diferentes operadores:" << std::endl;
    std::cout << "El resultado de sumar 4 y 3 es " << var_1+var_2 << std::endl;
    std::cout << "El resultado de restar 6.25 y 2.5 es " << var_4-var_3 << std::endl;
    std::cout << "El resultado de multiplicar 4 y 3 es " << var_1*var_2 << std::endl;
    std::cout << "El resultado de dividir 6.25 y 2.5 es " << var_4/var_3 << std::endl;
    std::cout << "El resultado del módulo entre 4 y 3 es " << var_1%var_2 << std::endl;

    std::cout << "¿Es 4 igual a 3?" << std::endl;
     if (var_1!=var_2) {
         std::cout << "Incorrecto" << std::endl;
     }
    std::cout << "¿Es 2.5 menor o igual que 3" << std::endl;
     if (var_3<=var_2) {
         std::cout << "Correcto" << std::endl;
     }
     std::cout << "¿Es mayor 4 que 6.25-2.5?" << std::endl;
     if (var_1>(var_4-var_3)) {
         std::cout << "Si, es mayor" << std::endl;
     }
     

     return 0;


        
    }







