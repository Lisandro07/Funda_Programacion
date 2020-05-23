#include <iostream>

using namespace std;

int main(void)
{
    int num;
    
    cout << "Programa que verifica si un numero es positivo, negativo o cero" << endl;
    cout << "Ingrese el numero: ";
    while (!(cin >> num))
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    if (num == 0)
    {
        cout << "El numero es cero" << endl;
    } else if (num > 0)
    {
        cout << "El numero es positivo" << endl;
    } else
    {
        cout << "El numero es negativo" << endl;
    }
    


    system("PAUSE");
    return 0;
}
