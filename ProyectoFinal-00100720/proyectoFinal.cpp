#include <iostream>

using namespace std;

struct costoPorArticulo
{
    string nombreArticulo;
    int cantidad;
    float precio, costoArticulo;
};

void agregarElementos(int cant, struct costoPorArticulo * art), calcularCostos(int cant, struct costoPorArticulo * art), imprimirContenido(int cant, struct costoPorArticulo * art);
float calcularTotal(int cant, struct costoPorArticulo * art);

int main(void) {
    int cant; // Cantidad de articulos a comprar
    float totalPagar;

    cout << "*** Procesamiento de factura de compra ***" << endl;
    cout << "Ingrese la cantidad de articulos a facturar: ";
    while (!(cin >> cant))
    {
        std::cout << "Error de datos, intente de nuevo: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    struct costoPorArticulo articulos[cant]; // Arreglo con la cantidad de articulos

    agregarElementos(cant, articulos);
    calcularCostos(cant, articulos);
    imprimirContenido(cant, articulos);

    totalPagar = calcularTotal(cant, articulos);
    cout << "\nEl total a pagar es: $";
    printf("%.2f", totalPagar);
    cout << "\n";

    return 0;
}

void agregarElementos(int cant, struct costoPorArticulo * art)
{
    string nProducto;
    int cantArticulos;
    float precio;

    for (int i = 0; i < cant; i++)
    {
        cout << "\nIngrese el nombre del producto " << i + 1 << ": ";
        while (!(cin >> nProducto))
        {
            std::cout << "Error de datos, intente de nuevo: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        
        cout << "Ingrese la cantidad de " << nProducto << " a facturar: ";
        while (!(cin >> cantArticulos))
        {
            std::cout << "Error de datos, intente de nuevo: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        cout << "Ingrese el precio unitario de " << nProducto << ": ";
        while (!(cin >> precio))
        {
            std::cout << "Error de datos, intente de nuevo: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        art[i].nombreArticulo = nProducto; // Asignacion a campos de struct
        art[i].cantidad = cantArticulos;
        art[i].precio = precio;
    }
    
}

void calcularCostos(int cant, struct costoPorArticulo * art)
{
    float costoArticulo = 0.0;

    for (int i = 0; i < cant; i++)
    {
        art[i].costoArticulo = art[i].precio * art[i].cantidad;
    }
}

void imprimirContenido(int cant, struct costoPorArticulo * art)
{
    cout << "\n***** Resumen de datos *****" << endl;

    for (int i = 0; i < cant; i++)
    {
        cout << "\nNombre del producto: " << art[i].nombreArticulo << endl;
        cout << "Cantidad a comprar: " << art[i].cantidad << endl;
        cout << "Precio unitario: $" << art[i].precio << endl;
    }
    
}

float calcularTotal(int cant, struct costoPorArticulo * art)
{
    float total = 0.0;

    for (int i = 0; i < cant; i++)
    {
        total = total + art[i].costoArticulo;
    }

    return total;
}
