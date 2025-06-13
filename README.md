El proyecto consiste en un sistema de carrito de compras en línea. El sistema está diseñado para que los usuarios puedan interactuar con productos de distintos tipos (ropa y electrónicos), agregarlos a un carrito de compras, visualizar su contenido y calcular el total a pagar. El proyecto utiliza programación orientada a objetos con herencia, polimorfismo y sobrecarga de operadores.

CONTEXTO

En un entorno de e-commerce, es fundamental tener un sistema que permita a los usuarios interactuar de manera ordenada con una tienda virtual. Esto incluye explorar productos, agregarlos a un carrito, y visualizar detalles relevantes antes de concretar una compra. La estructura del sistema utiliza clases orientadas a objetos con herencia, polimorfismo y agregación para reflejar estas funciones y facilitar la mantenibilidad del código.

FUNCIONALIDAD

El sistema permite:

- Mostrar un menú interactivo para el usuario desde consola
- Visualizar una lista de productos disponibles (instancias de clases como `Electronico` o `Ropa`)
- Agregar productos al carrito usando polimorfismo (`Producto*`)
- Ver los productos almacenados en el carrito con sus descripciones dinámicas
- Calcular y mostrar el total a pagar con base en los precios de los productos
- Utilizar sobrecarga de operador (`+=`) para agregar productos al carrito de forma intuitiva

CASOS DE FALLO:

Carrito vacío: Si el usuario intenta ver el total o los productos sin haber agregado nada al carrito, se mostrará una lista vacía o un total de $0, lo cual es esperado, pero puede malinterpretarse como un fallo si no se considera.

Selección inválida: Al elegir un producto, si el usuario ingresa un número fuera del rango disponible o un dato no numérico, puede producirse una entrada inválida. Actualmente no se implementa una validación robusta para estos errores.

Duplicidad lógica: El sistema permite agregar múltiples veces el mismo producto (porque son punteros). Esto puede o no ser deseado dependiendo del diseño esperado (por ejemplo, no hay control de inventario).

Fugas de memoria: Aunque el sistema libera la memoria dinámica al final con `delete`, un mal uso (como salir del sistema prematuramente o no liberar un producto eliminado del carrito) puede provocar fugas si se ampliara el sistema.

Limitación del sistema: Solo hay 4 productos disponibles y el carrito no guarda historial, pedidos ni usuarios. Es una implementación simplificada.

CONSIDERACIONES:
El programa puede correr tanto en la consola como en el editor de codigo y esta hecho con c++ standard por lo que corre en todos los sistemas operativos. En mi caso uso CodeBlocks y Windows.
compilar con: g++ main.cpp
correr en windows: "a.exe"
correr en linux: "/a.out"

CORRECCIONES O CAMBIOS:

Avance 1: Casos de fallo
Cambios en este avance:

Se identifico los casos que harían que el proyecto deje de funcionar y se pusieron en el README.

Avance 2: Error al compilar
Cambios en este avance:

Se incluyo <iostream> en el header Carrito.h.

Avance 3: Error al compilar
Cambios en este avance:

No se realizo ningun cambio debido a que correr de manera optima en mi consola, tambien se acudio a mas personas para verificar la funcionalidad del programa la cual fue exitosa.

Avance 4: Clases abstractas y sobrecarga de operadores
Cambios en este avance:

- `Producto` ahora es una clase abstracta, ya que su método `descripcion()` es virtual puro.
- Se sobrecarga el operador `==` para comparar productos por nombre y precio.
- Se sobrecarga el operador `+=` para agregar productos al carrito de forma más intuitiva (`carrito += producto`).
