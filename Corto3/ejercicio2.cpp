#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    cout << "Adivina el numero guardado" << endl;
    
    while (true)
    {
        int randomNumber = rand() % 100 + 1, index, intentos = 0;
        bool win = false;
        
        cout << "Ingresa un numero del 1 al 100: ";
        while (!(cin >> index)) //Validacion numeros
        {
            cout << "Error, intenta de nuevo: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        while (intentos < 4) //Cuenta los 4 intentos restantes
        {
            if (index == randomNumber)
            {
                cout << "Felicidades! Ganaste!" << endl;
                win = true;
                break;
            } else
            {
                if (index < randomNumber)
                {
                    cout << "Incorrecto, tu numero es menor" << endl;
                    cout << "Intentos restantes: " << 4 - intentos << endl;
                    cout << "Intenta de nuevo: ";
                    while (!(cin >> index)) //Validacion numeros
                    {
                        cout << "Error, intenta de nuevo: ";
                        cin.clear();
                        cin.ignore(123, '\n');
                    }
                } else
                {
                    cout << "Incorrecto, tu numero es mayor" << endl;
                    cout << "Intentos restantes: " << 4 - intentos << endl;
                    cout << "Intenta de nuevo: ";
                    while (!(cin >> index)) //Validacion numeros
                    {
                        cout << "Error, intenta de nuevo: ";
                        cin.clear();
                        cin.ignore(123, '\n');
                    }
                }
                intentos++;
            }
        }

        if (win == false) //Se ejecuta al terminar intentos
        {
            cout << "Perdiste :(" << endl;
        }
        
        cout << "Jugar de nuevo? (s/n) ";
        string response;
        cin >> response;

        if (response == "n") //Mantiene el primer while activo
        {
            break;
        }
    }
    cout << "Gracias por jugar" << endl;    

    return 0;
}
