#ifndef ELECTRONICO_H
#define ELECTRONICO_H
#include "Producto.h"

class Electronico : public Producto {
private:
    int garantiaMeses;

public:
    Electronico()
        : Producto(), garantiaMeses(0) {}

    Electronico(string nombre, double precio, int garantia)
        : Producto(nombre, precio), garantiaMeses(garantia) {}

    int getGarantia() { return garantiaMeses; }
    void setGarantia(int g) { garantiaMeses = g; }

    string descripcion() override {
        return "Electrónico: " + nombre + ", Precio: $" + to_string(precio) + ", Garantía: " + to_string(garantiaMeses) + " meses";
    }
};

#endif
