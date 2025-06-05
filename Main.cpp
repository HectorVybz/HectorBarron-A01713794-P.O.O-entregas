#include "Electronico.h"
#include "Ropa.h"
#include "Carrito.h"
#include <iostream>
using namespace std;

int main() {
    Electronico* laptop = new Electronico("Laptop ASUS", 15000.0, 24);
    Ropa* camiseta = new Ropa("Camiseta Negra", 299.0, "M");

    Carrito carrito;
    carrito += laptop;
    carrito += camiseta;

    cout << "Productos en el carrito:" << endl;
    carrito.mostrarProductos();

    cout << "Total a pagar: $" << carrito.calcularTotal() << endl;

    delete laptop;
    delete camiseta;

    return 0;
}
