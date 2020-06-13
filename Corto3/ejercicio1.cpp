#include <iostream>

using namespace std;

void calcularDatos(int horasExtra, int horasTrabajadas);

int main(void) {
    int numEmpleados, horasTrabajadas, horasExtra;

    cout << "Programa que calcula el salario mensual de empleados" << endl;
    
    cout << "Ingrese el numero de empleados: ";
    while (!(cin >> numEmpleados)) //Guarda cantidad de empleados a calcular
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    for (int i = 0; i < numEmpleados; i++)
    {
        horasTrabajadas = 0; //Reinicia variables
        horasExtra = 0;

        cout << "\nDatos del empleado numero " << i + 1 << " de " << numEmpleados << endl;

        cout << "Ingrese el numero de horas trabajadas en el mes : ";
        while (!(cin >> horasTrabajadas)) //Validacion numeros
        {
            cout << "Error, intenta de nuevo: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        cout << "Ingrese el numero de horas extra en el mes : ";
        while (!(cin >> horasExtra)) //Validacion numeros
        {
            cout << "Error, intenta de nuevo: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        cout << "\n";

        calcularDatos(horasExtra, horasTrabajadas); //Llama a funcion que hace calculos
    }

    return 0;
}

void calcularDatos(int horasExtra, int horasTrabajadas)
{
    float horaNormal = 1.75, horaExtra = 2.50, sSocial = 0.04, afp = 0.0625, isr = 0.10;
    float salarioTotal, salarioReal;

    salarioTotal = (horasTrabajadas * horaNormal) + (horasExtra * horaExtra);

    if (salarioTotal > 500)
    {
        salarioReal = salarioTotal - ((salarioTotal * sSocial) + (salarioTotal * afp) + (salarioTotal * isr));
        
        cout << "Salario total: $";
        printf("%.2f", salarioTotal);
        cout << "" << endl;

        cout << "Se descuenta Seguro Social, AFP e ISR" << endl;

        cout << "Salario real: $";
        printf("%.2f", salarioReal);
        cout << "" << endl;
        
    } else
    {
        salarioReal = salarioTotal - ((salarioTotal * sSocial) + (salarioTotal * afp));
        
        cout << "Salario total: $";
        printf("%.2f", salarioTotal);
        cout << "" << endl;

        cout << "Se descuenta Seguro Social y AFP" << endl;

        cout << "Salario real: $";
        printf("%.2f", salarioReal);
        cout << "\n" << endl;
    }
}

    