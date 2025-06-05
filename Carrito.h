#ifndef CARRITO_H
#define CARRITO_H
#include <iostream>
#include <vector>
#include "Producto.h"
using namespace std;

class Carrito {
private:
    vector<Producto*> productos;

public:
    void agregarProducto(Producto* p) {
        productos.push_back(p);
    }

    double calcularTotal() const {
        double total = 0.0;
        for (auto p : productos) {
            total += p->getPrecio();
        }
        return total;
    }

    void mostrarProductos() const {
        for (auto p : productos) {
            cout << p->descripcion() << endl;
        }
    }

    // Sobrecarga de operador += para agregar productos
    Carrito& operator+=(Producto* p) {
        agregarProducto(p);
        return *this;
    }
};

#endif
