#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto {
protected:
    string nombre;
    double precio;

public:
    Producto()
        : nombre(""), precio(0.0) {}

    Producto(string nombre, double precio)
        : nombre(nombre), precio(precio) {}

    string getNombre() { return nombre; }
    double getPrecio() { return precio; }

    void setNombre(string nom) { nombre = nom; }
    void setPrecio(double p) { precio = p; }

    virtual string descripcion() {
        return "Producto: " + nombre + ", Precio: $" + to_string(precio);
    }
};

#endif
