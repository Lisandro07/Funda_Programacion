#include <iostream>

using namespace std; 

int main(void)
{
    int n1, n2;

    cout << "Programa que verifica si un numero es divisible entre otro."<< endl;
    cout << "Ingresa el numero a verificar: ";
    while (!(cin >> n1))
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    
    cout << "Ingresa el numero para dividir mayor a 0: ";
    while (!(cin >> n2) || n2 == 0)
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    if (n1 % n2 == 0)
    {
        cout << n1 << " es divisible entre " << n2;
    } else
    {
        cout << n1 << " no es divisible entre " << n2;
    }
    

    system("PAUSE");
    return 0;
}
