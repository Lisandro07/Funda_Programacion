#include <iostream>
#include <ctype.h>

using namespace std;

int main(void) {
    string palabra;
    int longitudPalabra;

    cout << "Programa que verifica la longitud de la palabra" << endl;
    cout << "Ingrese la palabra: ";
    cin >> palabra;    
    
    longitudPalabra = palabra.length();
    if (longitudPalabra > 10 && longitudPalabra % 2 == 0)
    {
        cout << "La longitud de la palabra es mayor a 10 y es par" << endl;
    } else if (longitudPalabra <= 10 && longitudPalabra % 2 == 0)
    {
        cout << "La longitud de la palabra es menor o igual a 10 y es par" << endl;
    }else if (longitudPalabra > 10 && longitudPalabra % 2 != 0)
    {
        cout << "La longitud de la palabra es mayor a 10 y es impar" << endl;        
    } else if (longitudPalabra <= 10 && longitudPalabra % 2 != 0)
    {
        cout << "La longitud de la palabra es menor o igual a 10 y es impar" << endl;
    }


    system("PAUSE");
    return 0;
}