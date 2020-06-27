#include <iostream>

using namespace std;

string convertirString(string frase);

int main(void)
{
    string frase, response;
    int cont = 0;
    
    cout << "Programa que aplica la clave del murcielago" << endl;
    cout << "Ingrese una frase: ";
    getline(cin >> ws, frase);
    
    response = convertirString(frase);

    cout << "El resultado es: " << response << endl;

    return 0;
}
string convertirString(string frase)
{
    string murcielago = "murcielago", num = "0123456789";

    for (int i = 0; i < frase.length(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (frase[i] == murcielago[j])
            {
                frase[i] = num[j];
            } 
        }
    }
   
    return frase;
}
