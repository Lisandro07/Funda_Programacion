#include <iostream>

using namespace std;

int main(void)
{
    int num;
    
    cout << "Programa que verifica si un numero es par o impar" << endl;
    cout << "Ingrese el numero: ";
    while (!(cin >> num))
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    if (num % 2 == 0)
    {
        std::cout << num << " es par" << std::endl;
    } else
    {
        std::cout << num << " es impar" << std::endl;
    }
    

    system("PAUSE");
    return 0;
}

