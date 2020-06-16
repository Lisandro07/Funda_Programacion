#include <iostream>
#include <locale.h>

using namespace std;

void funcionMain(), ejercicio1(), ejercicio2(), ejercicio3(), ejercicio4();
bool esBisiesto(int year), validarFecha(int d, int m, int a);
string calcularSeg(int h, int m, int s), cambiarFecha(int d, int m, int a);

int main(void) {
    setlocale(LC_CTYPE, "Spanish");

    cout << "Guia laboratorio 5" << endl;
    funcionMain();

    return 0;
}

void funcionMain()
{
    string opciones[4] = {"1 - Metodo de Euclides" , "2 - Hora 1 seg despues", "3 - Año bisiesto", "4 - Dia siguiente"};
    int seleccion;

    cout << "\nIngrese el numero del ejercicio que desea revisar (oprima otra tecla para salir):" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << opciones[i] << " | ";
    }
    
    cout << "\n";
    cin >> seleccion;
    cout << "\n";
    switch (seleccion)
    {
    case 1:
        ejercicio1();
        break;
    case 2:
        ejercicio2();
        break;
    case 3:
        ejercicio3();
        break;
    case 4:
        ejercicio4();
        break;
    default:
        cout << ":)";
        break;
    }
}

void ejercicio1()
{
    int n1, n2, numeroMayor, numeroMenor, res;

    cout << "Programa que realiza el metodo de Euclides" << endl;

    cout << "Digite el primer numero: ";
    while (!(cin >> n1))
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    cout << "Digite el segundo numero: ";
    while (!(cin >> n2))
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    if (n1 > n2) //Determina el numero mayor
    {
        numeroMayor = n1;
        numeroMenor = n2;
    } else
    {
        numeroMayor = n2;
        numeroMenor = n1;
    }

    res = numeroMayor / numeroMenor;

    if(res == 0){
       printf("\nEl MCD es %d", numeroMenor);
       }
    while(!res == 0)
    {
        numeroMayor = numeroMenor;
        numeroMenor = res;
        res = numeroMayor%numeroMenor;
        if(numeroMayor%numeroMenor == 0){
            printf("\nEl MCD es %d", numeroMenor);
           break;
        }
    }

    cout << "\n";
    funcionMain();
}

void ejercicio2()
{
    int h, m, s;
    string response;

    cout << "Programa que calcula la hora un segundo despues" << endl;
    cout << "Ingrese los segundos (0 - 59): ";
    cin >> s;
    if (s < 0 or s > 59)
    {
        cout << "Datos invalidos" << endl;
    } else
    {
        cout << "Ingrese los minutos (0 - 59): ";
        cin >> m;
        if (m < 0 or m > 59)
        {
            cout << "Datos invalidos" << endl;
        } else
        {
            cout << "Ingrese las horas (0 - 23): ";
            cin >> h;
            if (h < 0 or h > 23)
            {
                cout << "Datos invalidos" << endl;
            } else
            {
                response = calcularSeg(h, m ,s);
                cout << response;
            }
        }
    }
    cout << "\n";
    funcionMain();
}

void ejercicio3()
{
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

    response = esBisiesto(year); //Guarda el return de la funcion esBisiesto
    if (response == true)
    {
        cout << year << " es bisiesto";
    } else
    {
        cout << year << " no es bisiesto";
    }
    cout << "\n";
    funcionMain();
}

void ejercicio4()
{
    int d, m, a;
    bool dataValid = false;
    string response;

    cout << "Calculo de fecha de un dia despues" << endl;

    cout << "Ingrese el dia: (1 - 31) ";
    while (!(cin >> d))
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    cout << "Ingrese el mes: (1- 12) ";
    while (!(cin >> m))
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    cout << "Ingrese el año: (00) ";
    while (!(cin >> a))
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    dataValid = validarFecha(d, m, a);
    if (dataValid == false)
    {
        cout << "Fecha invalida" << endl;
    } else
    {
        response = cambiarFecha(d, m, a);
        cout << response;
    }

    cout << "\n";
    funcionMain();
}

string calcularSeg(int h, int m, int s)
{
    string hora;

    if (h == 23 and m == 59 and s == 59)
    {
        h = 0, m = 0, s = 0;
        hora = to_string(h) + ":" + to_string(m) + ":" + to_string(s);
    } else if (h != 23 and m == 59 and s == 59)
    {
        h++, m = 0, s = 0;
        hora = to_string(h) + ":" + to_string(m) + ":" + to_string(s);
    }else if (m != 59 and s == 59)
    {
        m++, s = 0;
        hora = to_string(h) + ":" + to_string(m) + ":" + to_string(s);
    }else if (s != 59)
    {
        s++;
        hora = to_string(h) + ":" + to_string(m) + ":" + to_string(s);
    }
    
    return hora;
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

bool validarFecha(int d, int m, int a)
{
    bool bisiesto = false, valid = false;
    bisiesto = esBisiesto(a);

    if (d <= 0 or d > 31)
    {
        valid = false;
    } else if (d == 29 and m == 2 and bisiesto == false) //29 de feb no bisiesto
    {
        valid = false;
    } else if (d > 30) //Meses con 30 dias
    {
        if (m == 2 or m == 4 or m == 6 or m == 9 or m == 11)
        {
            return false;
        }
    } else if (d == 29 and m == 2 and bisiesto == true) // 29 de feb bisiesto
    {
        valid = true;
    } else if (m < 1 or m > 12)
    {
        valid = false;
    }else
    {
        valid = true;
    }

    return valid;
}

string cambiarFecha(int d, int m, int a)
{
    string fecha;
    bool bisiesto = false;
    bisiesto = esBisiesto(a);

    if (d == 31)
    {
        if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10)
        {
            d = 1;
            m++;
            fecha = to_string(d) + "/" + to_string(m) + "/" + to_string(a);
        }
        
    } else if (d == 30)
    {
        if (m == 4 or m == 6 or m == 9 or m == 11)
        {
            d = 1;
            m++;
            fecha = to_string(d) + "/" + to_string(m) + "/" + to_string(a);
        } else
        {
            d++;
            fecha = to_string(d) + "/" + to_string(m) + "/" + to_string(a);
        }
        
    } else if (d == 29 and m == 2)
    {
        d = 1;
        m++;
        fecha = to_string(d) + "/" + to_string(m) + "/" + to_string(a);
    } else if (d == 31 and m == 12)
    {
        d = 1;
        m = 1;
        a++;
        fecha = to_string(d) + "/" + to_string(m) + "/" + to_string(a);
    } else if (d == 28 and m == 2 and bisiesto == true)
    {
        d++;
        fecha = to_string(d) + "/" + to_string(m) + "/" + to_string(a);
    } else if (d == 28 and m == 2 and bisiesto == false)
    {
        d = 1, m++;
        fecha = to_string(d) + "/" + to_string(m) + "/" + to_string(a);
    }
    else
    {
        d++;
        fecha = to_string(d) + "/" + to_string(m) + "/" + to_string(a);
    }

    return fecha;
}