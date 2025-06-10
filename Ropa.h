#ifndef ROPA_H
#define ROPA_H
#include "Producto.h"

/**
 * Clase Ropa
 * Hereda de Producto y añade la caracteristica especifica de talla.
 * Representa productos textiles como camisetas, pantalones, etc.
 */
class Ropa : public Producto {
private:
    string talla;

public:
    // Constructor por defecto
    Ropa() : Producto(), talla("") {}

    // Constructor con parametros: inicializa nombre, precio y talla
    Ropa(string nombre, double precio, string talla)
        : Producto(nombre, precio), talla(talla) {}

    // Getter y setter de talla
    string getTalla() const { return talla; }
    void setTalla(string t) { talla = t; }

    // Implementacion del metodo virtual de Producto
    // Devuelve una descripcion de la prenda de ropa
    string descripcion() const override {
        return "Ropa: " + nombre + ", Precio: $" + to_string(precio)
             + ", Talla: " + talla;
    }
};

#endif
