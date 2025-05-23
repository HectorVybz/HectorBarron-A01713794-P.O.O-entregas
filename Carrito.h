#ifndef CARRITO_H
#define CARRITO_H
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

    double calcularTotal() {
        double total = 0.0;
        for (auto p : productos) {
            total += p->getPrecio();
        }
        return total;
    }

    void mostrarProductos() {
        for (auto p : productos) {
            cout << p->descripcion() << endl;
        }
    }
};

#endif
