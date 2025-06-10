#ifndef CARRITO_H
#define CARRITO_H
#include <iostream>
#include <vector>
#include "Producto.h"
using namespace std;

/**
 * Clase Carrito
 * Representa un carrito de compras que puede almacenar productos diversos.
 * Permite agregar productos, mostrar sus descripciones y calcular el total.
 */
class Carrito {
private:
    vector<Producto*> productos; // Vector de punteros a productos (polimorfismo)

public:
    // Agrega un producto al carrito
    void agregarProducto(Producto* p) {
        productos.push_back(p);
    }

    // Calcula el total del carrito sumando los precios de todos los productos
    double calcularTotal() const {
        double total = 0.0;
        for (auto p : productos) {
            total += p->getPrecio();
        }
        return total;
    }

    // Muestra la descripcion de cada producto usando polimorfismo
    void mostrarProductos() const {
        for (auto p : productos) {
            cout << p->descripcion() << endl;
        }
    }

    // Sobrecarga del operador += para permitir agregar productos de forma intuitiva
    Carrito& operator+=(Producto* p) {
        agregarProducto(p);
        return *this;
    }
};

#endif
