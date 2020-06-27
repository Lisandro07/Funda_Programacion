#include <iostream>

using namespace std;

float calcularPromedio(float arr[]);
void compararEstaturas(float arr[], float prom);

int main(void)
{
    float estaturas[25], prom;

    cout << "Programa que calcula las estaturas de una clase" << endl;

    for (int i = 0; i < 25; i++)
    {
        cout << "Ingrese estatura en metros: ";
        cin >> estaturas[i];
    }

    prom = calcularPromedio(estaturas);
    cout << "\nEl promedio de estaturas es: ";
    printf("%.2f", prom);
    cout << "\n";

    compararEstaturas(estaturas, prom);

    return 0;
}

float calcularPromedio(float arr[])
{
    float sum = 0.0, p;

    for (int i = 0; i < 25; i++)
    {
        sum = sum + arr[i];
    }

    p = sum / 25;
    return p;
}

void compararEstaturas(float arr[], float prom)
{
    int debajoPromedio = 0, sobrePromedio = 0;

    for (int i = 0; i < 25; i++)
    {
        if (arr[i] >= prom)
        {
            sobrePromedio++;
        } else
        {
            debajoPromedio++;
        }
    }

    cout << "Numero de estaturas debajo del promedio: " << debajoPromedio << endl;
    cout << "Numero de estaturas sobre del promedio: " << sobrePromedio << endl;
    
}