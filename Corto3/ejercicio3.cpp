#include <iostream>
#include <locale.h>

using namespace std;

bool esBisiesto(int year);

int main(void)
{
    setlocale(LC_CTYPE, "Spanish");
    int year;
    bool response = false;

    cout << "Programa que determina si un año es bisiesto" << endl;

    cout << "Ingrese un año: ";
    while (!(cin >> year))
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    response = esBisiesto(year); //Guarda el return de la funcion
    if (response == true)
    {
        cout << year << " es bisiesto";
    } else
    {
        cout << year << " no es bisiesto";
    }

    return 0;
}

bool esBisiesto(int year) {
    if (year % 400 == 0)
    {
        return true;
    } else
    {
        if (year % 4 == 0)
        {
           return true; 
        } else {
            return false;
        }
    }
}
