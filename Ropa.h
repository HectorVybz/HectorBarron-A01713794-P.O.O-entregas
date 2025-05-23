#ifndef ROPA_H
#define ROPA_H
#include "Producto.h"

class Ropa : public Producto {
private:
    string talla;

public:
    Ropa()
        : Producto(), talla("") {}

    Ropa(string nombre, double precio, string talla)
        : Producto(nombre, precio), talla(talla) {}

    string getTalla() { return talla; }
    void setTalla(string t) { talla = t; }

    string descripcion() override {
        return "Ropa: " + nombre + ", Precio: $" + to_string(precio) + ", Talla: " + talla;
    }
};

#endif
