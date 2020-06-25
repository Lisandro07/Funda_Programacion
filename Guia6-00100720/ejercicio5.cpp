#include <iostream>

using namespace std;

int main(void)
{
    int array[50], len = sizeof(array) / sizeof(array[0]), cont = 1;

    cout << "Programa que imprime numeros impares" << endl;

    for (int i = 0; i < len; i++)
    {
        array[i] = cont;
        cont += 2;
    }

    for (int i = 0; i < len; i++)
    {
        cout << array[49 - i] << endl;
    }

    return 0;
}
