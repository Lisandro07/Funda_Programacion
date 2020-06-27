#include <iostream>

using namespace std;

void llenarDatos(int cant), calcularNotas(float arr[][5], int n1);

int main(void)
{
    int cantEstudiantes;

    cout << "Programa que calcula promedios de n estudiantes" << endl;
    cout << "La nota para aprobar es 6" << endl;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantEstudiantes;

    llenarDatos(cantEstudiantes);

    return 0;
}

void llenarDatos(int cant)
{
    float tablaEstudiantes[cant][5], nota;
    int i, j;

    cout << "\n";
    for (i = 0; i < cant; i++)
    {
        for (j = 0; j < 5; j++)
        {
            nota = 0.0;
            cout << "Ingrese la nota " << j + 1 << " del estudiante " << i + 1 << ": ";
            while (!(cin >> nota))
            {
                std::cout << "Error, intente de nuevo: ";
                cin.clear();
                cin.ignore(123, '\n');
            }

            if (nota < 0 or nota > 10)
            {
                cout << "Error, datos incorrectos" << endl;
                nota = 0.0;
                break;
            } else
            {
                tablaEstudiantes[i][j] = nota;
            }
        }
        cout << "\n";
        calcularNotas(tablaEstudiantes, i);
    }

}

void calcularNotas(float arr[][5], int n1)
{
    float prom = 0.0;

    for (int i = 0; i < 5; i++)
    {
        prom = prom + (arr[n1][i] * 0.2);
    }

    if (prom < 6)
    {
        cout << "Promedio: " << prom << endl;
        cout << "Reprobado" << endl;
    } else
    {
        cout << "Promedio: " << prom << endl;
        cout << "Aprobado" << endl;
    }

    cout << "\n";
}