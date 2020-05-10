#include <iostream>
#include <math.h>

using namespace std;

int forma1(int a, int b, int c);
int forma2(int a, int b, int c);

int main(void)
{
    int a, b, c, res1, res2;

    std::cout << "Programa que calcula la formula cuadratica" << std::endl;
    std::cout << "Ingrese el valor de a: ";

    while (!(cin >> a))
    {
        std::cout << "Error de formato, intente de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    std::cout << "\nIngrese el valor de b: ";
    while (!(cin >> b))
    {
        std::cout << "Error de formato, intente de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    std::cout << "\nIngrese el valor de c: ";
    while (!(cin >> c))
    {
        std::cout << "Error de formato, intente de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    res1 = forma1(a, b, c);
    res2 = forma2(a, b, c);

    std::cout << "x1 equivale a: " << res1 << std::endl;
    std::cout << "x2 equivale a: " << res2 << std::endl;

    system("PAUSE");
    return 0;
}

int forma1(int a, int b, int c)
{
    int squareRoot, solve;
    try
    {
        squareRoot = sqrt((pow(b, 2)) + (-4 * a * c));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "No se puede resolver" << std::endl;
    }
    
    solve = ((-1 * b) + squareRoot) / (2 * a);
    return solve;
}

int forma2(int a, int b, int c)
{
    int squareRoot, solve2;
    try
    {
        squareRoot = sqrt((pow(b, 2)) + (-4 * a * c));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "No se puede resolver" << std::endl;
    }
    
    solve2 = ((-1 * b) - squareRoot) / (2 * a);
    return solve2;
}