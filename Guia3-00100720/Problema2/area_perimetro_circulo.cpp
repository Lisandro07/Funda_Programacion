#include <iostream>
#include <math.h>

using namespace std;

double calcularArea(double radioCirculo);
double calcularPerimetro(double radioCirculo);

int main(void)
{
    double radioCirculo, areaCirculo, perimetroCirculo;

    std::cout << "Programa que calcula el area y perimetro de un circulo" << std::endl;
    std::cout << "Ingrese el radio del circulo: ";

    while (!(cin >> radioCirculo))
    {
        std::cout << "Error, intente de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    areaCirculo = calcularArea(radioCirculo);
    perimetroCirculo = calcularPerimetro(radioCirculo);
    
    std::cout << "El area es: ";
    printf("%.2f", areaCirculo);
    std::cout << "" << std::endl;

    std::cout << "El perimetro es: ";
    printf("%.2f", perimetroCirculo);
    std::cout << "" << std::endl;
    
    system("PAUSE");
    return 0;
}

double calcularArea(double radioCirculo)
{
    double area = 3.1416 * pow(radioCirculo, 2);
    return area;
}

double calcularPerimetro(double radioCirculo)
{
    double perimetro = 2 * 3.1416 * radioCirculo;
    return perimetro;
}

