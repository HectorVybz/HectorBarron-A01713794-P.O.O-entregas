/*
 * Proyecto Carrito de Compras Online
 * Hector ALejandro Barron Tamayo
 * A01713794
 * 10/06/2025
 *
 * Versión interactiva del sistema de carrito de compras.
 * El usuario puede seleccionar productos para agregarlos al carrito.
 */

#include "Electronico.h"
#include "Ropa.h"
#include "Carrito.h"
#include <iostream>
using namespace std;

void mostrarProductosDisponibles(Producto* productos[], int total) {
    cout << "=== PRODUCTOS DISPONIBLES ===" << endl;
    for (int i = 0; i < total; i++) {
        cout << "(" << i + 1 << ") " << productos[i]->descripcion() << endl;
    }
    cout << endl;
}

int main() {
    // Crear productos disponibles
    Electronico* laptop = new Electronico("Laptop ASUS", 15000.0, 24);
    Electronico* audifonos = new Electronico("Audífonos Bluetooth", 1200.0, 12);
    Ropa* camiseta = new Ropa("Camiseta Negra", 299.0, "M");
    Ropa* jeans = new Ropa("Jeans Azul", 599.0, "32");

    // Arreglo de punteros a productos
    Producto* disponibles[] = { laptop, audifonos, camiseta, jeans };
    const int TOTAL_PRODUCTOS = 4;

    Carrito carrito;
    int opcion;

    do {
        cout << "=== MENÚ PRINCIPAL ===\n";
        cout << "1. Ver productos disponibles\n";
        cout << "2. Agregar producto al carrito\n";
        cout << "3. Ver productos en el carrito\n";
        cout << "4. Ver total a pagar\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarProductosDisponibles(disponibles, TOTAL_PRODUCTOS);
                break;

            case 2: {
                int seleccion;
                mostrarProductosDisponibles(disponibles, TOTAL_PRODUCTOS);
                cout << "Selecciona el número del producto que deseas agregar: ";
                cin >> seleccion;

                if (seleccion >= 1 && seleccion <= TOTAL_PRODUCTOS) {
                    carrito += disponibles[seleccion - 1];
                    cout << "✓ Producto agregado al carrito.\n";
                } else {
                    cout << "✖ Opción inválida.\n";
                }
                break;
            }

            case 3:
                cout << "=== PRODUCTOS EN EL CARRITO ===\n";
                carrito.mostrarProductos();
                break;

            case 4:
                cout << "Total a pagar: $" << carrito.calcularTotal() << endl;
                break;

            case 5:
                cout << "Saliendo del sistema...\n";
                break;

            default:
                cout << "Opción no válida. Intenta nuevamente.\n";
        }

        cout << "\n-----------------------------\n";

    } while (opcion != 5);

    // Liberar memoria dinámica
    delete laptop;
    delete audifonos;
    delete camiseta;
    delete jeans;

    return 0;
}
