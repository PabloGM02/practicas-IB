#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int numero;
    cout << "Introduzca el número de palabras que va a escribir: ";
    cin >> numero;
    vector<string> lista;

    for (int i = 1; i <= numero; ++i) {

        string palabra;
        cout << "Palabra " << i << ": ";
        cin >> palabra; 
        lista.push_back(palabra); 
        cout << palabra.length();
        
    }
    
    
}