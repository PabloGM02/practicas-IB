#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int palabras = {5};
    cout << "Este programa imprimirá en pantalla 5 palabras ordenadas alfabéticamente." << endl;
    cout << "Introduzca " << palabras << " palabras, cada una que empiece por una vocal: " << endl;
    vector<string> lista;


    for (int x = 1; x <= palabras; ++x) {
        string vocales;
        cout << "Palabra " << x << ":";
        cin >> vocales;
        lista.push_back(vocales);
        char a = a;
        char e = e;
        char i = i;
        char o = o;
        char u = u;

        if (vocales.front() == 'a') {
            cout << vocales << endl;
        }
        if (vocales.front() == 'e') {
            cout << vocales << endl;
        }
        if (vocales.front() == 'i') {
            cout << vocales << endl;
        }
        if (vocales.front() == 'o') {
            cout << vocales << endl;
        }
        if (vocales.front() == 'u') {
            cout << vocales << endl;
         }
    }

}