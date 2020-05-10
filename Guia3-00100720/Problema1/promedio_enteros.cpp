#include <iostream>

using namespace std;

int main(void)
{
    int n1, n2, n3;

    std::cout << "Programa que calcula el promedio de tres enteros" << std::endl;
    std::cout << "Ingrese el primer numero" << std::endl;

    while (!(cin >> n1))
    {
        std::cout << "Error, intente de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    std::cout << "\nIngrese el segundo numero" << std::endl;
    while (!(cin >> n2))
    {
        std::cout << "Error, intente de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    std::cout << "\nIngrese el tercer numero" << std::endl;
    while (!(cin >> n3))
    {
        std::cout << "Error, intente de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    int total = (n1 + n2 + n3)/3;
    std::cout << "\nEl promedio de: " << n1 << ", " << n2 << " y " << n3 << " es: " << total << std::endl;


    system("PAUSE");
    return 0;
    
}
