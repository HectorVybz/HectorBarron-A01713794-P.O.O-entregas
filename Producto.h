#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

/**
 * Clase base abstracta Producto
 * Representa un producto generico con nombre y precio.
 * Sirve como clase padre para otros tipos de productos como Ropa o Electrónico.
 */
class Producto {
protected:
    string nombre;
    double precio;

public:
    // Constructor por defecto
    Producto() : nombre(""), precio(0.0) {}

    // Constructor con parametros
    Producto(string nombre, double precio) : nombre(nombre), precio(precio) {}

    // Getters
    string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }

    // Setters
    void setNombre(string nom) { nombre = nom; }
    void setPrecio(double p) { precio = p; }

    // Metodo virtual puro para descripcion del producto (obliga a clases hijas a implementarlo)
    virtual string descripcion() const = 0;

    // Destructor virtual para evitar fugas de memoria en herencia
    virtual ~Producto() {}

    // Sobrecarga del operador igualdad para comparar dos productos
    bool operator==(const Producto& otro) const {
        return nombre == otro.nombre && precio == otro.precio;
    }
};

#endif
