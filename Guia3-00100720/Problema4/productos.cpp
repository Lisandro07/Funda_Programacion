#include <iostream>

using namespace std;

int main(void)
{
    string nombreProducto;
    double precio, totalPagar;
    int cantidad;

    std::cout << "Programa que calcula el total a gastar" << std::endl;
    std::cout << "Ingrese el nombre del produto: ";
    cin >> nombreProducto;

    std::cout << "Ingrese el precio del producto: $";
    cin >> precio;

    std::cout << "Ingrese la cantidad a comprar: ";
    cin >> cantidad;

    totalPagar = precio * cantidad;
    
    if (cantidad == 1)
    {
        std::cout << "Llevara " << cantidad << " unidad de: " << nombreProducto << ". El total es de: $" << totalPagar << std::endl;
    } else
    {
        std::cout << "Llevara " << cantidad << " unidades de: " << nombreProducto << ". El total es de: $" << totalPagar << std::endl;
    }

    system("PAUSE");
    return 0;
}
