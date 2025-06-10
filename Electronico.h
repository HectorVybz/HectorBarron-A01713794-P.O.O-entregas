#ifndef ELECTRONICO_H
#define ELECTRONICO_H
#include "Producto.h"

/**
 * Clase Electronico
 * Hereda de Producto y agrega el atributo especifico de garantia (en meses).
 * Representa productos tecnologicos o electricos.
 */
class Electronico : public Producto {
private:
    int garantiaMeses; // Duracion de la garantia del producto en meses

public:
    // Constructor por defecto
    Electronico() : Producto(), garantiaMeses(0) {}

    // Constructor con parametros: inicializa nombre, precio y garantia
    Electronico(string nombre, double precio, int garantia)
        : Producto(nombre, precio), garantiaMeses(garantia) {}

    // Getter y setter de garantia
    int getGarantia() const { return garantiaMeses; }
    void setGarantia(int g) { garantiaMeses = g; }

    // Implementacion del metodo virtual puro de Producto
    // Retorna una descripcion detallada del producto electronico
    string descripcion() const override {
        return "Electronico: " + nombre + ", Precio: $" + to_string(precio) +
               ", Garantia: " + to_string(garantiaMeses) + " meses";
    }
};

#endif
