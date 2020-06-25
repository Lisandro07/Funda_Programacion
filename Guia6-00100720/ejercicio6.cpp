#include <iostream>

using namespace std;

int main(void) {
    int index, num, selectedNumber, cont = 0;

    cout << "Programa que calcula cuantas veces se repite un numero en el array" << endl;
    cout << "Ingrese el numero de elementos del arreglo: ";
    while (!(cin >> index) || index == 0)
    {
        cout << "Error, intenta de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    int array[index];

    for (int i = 0; i < index; i++)
    {
        num = 0;
        cout << "Ingrese un numero: ";
        cin >> num;
        array[i] = num;
    }

    cout << "Ingrese un numero para verificar: ";
    cin >> selectedNumber;

    for (int i = 0; i < index; i++)
    {
        if (array[i] == selectedNumber)
        {
            cont++;
        }
        
        
    }

    cout << selectedNumber << " se repite " << cont << " veces :)" << endl;
    
    
    return 0;
}