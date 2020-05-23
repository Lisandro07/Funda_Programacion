#include <iostream>
#include <ctype.h>



using namespace std;

int main(void)
{
    string palabra, primeraLetra, ultimaLetra;

    cout << "Programa que verifica la primera y ultima letra de una palabra" << endl;
    cout << "Ingrese una palabra: ";
    
    getline (cin,palabra);
    for (int i=0;i<palabra.length();i++){
        palabra[i]=tolower(palabra[i]);
    }

    primeraLetra = palabra[0];
    ultimaLetra = palabra[palabra.length() - 1];

    if (primeraLetra == ultimaLetra)
    {
        cout << "La palabra comienza y termina con la misma letra" <<endl;
    } else
    {
        cout << "La palabra no comienza y ni termina con la misma letra" <<endl;
    }


    system("PAUSE");
    return 0;
}
