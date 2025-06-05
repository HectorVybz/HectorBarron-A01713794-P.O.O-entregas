El proyecto consiste en un sistema de carrito de compras en línea. El sistema está diseñado para que se puedan registrar usuarios, agregar productos a un carrito, realizar pedidos, y gestionar tanto la información del envío como los detalles de los productos. También incluye la figura del administrador, quien se encarga de actualizar el catálogo.

CONTEXTO

En un entorno de e-commerce, es fundamental tener un sistema que permita a los usuarios interactuar de manera ordenada con una tienda virtual. Esto incluye la creación de cuentas, inicio de sesión, gestión de carritos, procesamiento de pedidos y cálculo de precios.  
La estructura del sistema utiliza clases orientadas a objetos con herencia, composición y asociaciones para reflejar estas funciones y facilitar la mantenibilidad del código.

FUNCIONALIDAD

El sistema permite:

- Registrar y autenticar usuarios (clientes y administradores)
- Agregar productos al carrito
- Visualizar y modificar el contenido del carrito
- Procesar pedidos
- Calcular subtotales y totales de los pedidos
- Gestionar información de envío
- Administrar el catálogo desde la cuenta del administrador

Casos de fallo:
Carrito de compras no disponible: Puede ocurrir si el objeto del carrito no ha sido inicializado correctamente, si el usuario no ha iniciado sesión, o si se ha producido una pérdida de sesión. En este caso, las operaciones como agregar o visualizar productos pueden fallar.

Pedidos retrasados: Aunque el sistema permite registrar pedidos, no está directamente conectado con un sistema de logística real. Por lo tanto, pueden simularse retrasos en la entrega, o el estado del pedido puede no actualizarse correctamente si no se implementa una lógica de seguimiento adecuada.

Dirección incorrecta o paquete mal asignado: Si el usuario introduce una dirección errónea o incompleta durante el proceso de envío, o si se produce un error en la asociación del pedido con los datos del cliente, el pedido podría enviarse a una ubicación equivocada.

Contraseña incorrecta o mal escrita: El sistema puede bloquear el acceso si el usuario escribe mal su contraseña varias veces, o puede no validar adecuadamente errores de mayúsculas/minúsculas o espacios en blanco, afectando la experiencia de inicio de sesión.

Errores de validación de entrada: Cadenas vacías, caracteres inválidos o formatos incorrectos en campos como correo electrónico, dirección o nombres pueden generar fallos en el registro o en la realización de pedidos.

Inconsistencias en el catálogo de productos: Si el administrador elimina o modifica productos mientras un cliente los tiene en su carrito, podrían generarse errores al momento de realizar el pedido.
