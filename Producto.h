#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto {
protected:
    string nombre;
    double precio;

public:
    Producto() : nombre(""), precio(0.0) {}
    Producto(string nombre, double precio) : nombre(nombre), precio(precio) {}

    string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }

    void setNombre(string nom) { nombre = nom; }
    void setPrecio(double p) { precio = p; }

    virtual string descripcion() const = 0; // metodo puro
    virtual ~Producto() {}

    // Sobrecarga de operador igualdad
    bool operator==(const Producto& otro) const {
        return nombre == otro.nombre && precio == otro.precio;
    }
};

#endif
