/*!
@file sd.h
@brief Declara las variables y funciones públicas para el manejo de la tarjeta sd.
*/
#include "derivative.h"
#include"error.h"

//! Enciende tarjeta SD
/*!
@return Indica si hubo un error
    @li @c 1 No se produjo un error
*/
error SD_Prender(void);

//! Envia byte CMD
/*!
@param[in] CMD
@param[in] arg
@return Indica si hubo un error
    @li @c 1 No se produjo un error
*/

error SD_EnviarCMD(byte,byte*);

//! Envia byte a la tarjeta SD
/*!
@param[in] data dato a enviar
@return Indica si hubo un error
    @li @c 1 No se produjo un error
*/

error SD_EnviarByte(byte);

//! Recibe byte de la tarjeta SD
/*!
@param[in] Rx byte donde se almacena el dato
@return Indica si hubo un error
    @li @c 1 No se produjo un error
*/

error SD_RecibirByte(byte*);

//! Envia y recibe byte de la tarjeta SD
/*!
@param[in] Tx dato a enviar
@param[in] Rx byte donde se almacena el dato
@return Indica si hubo un error
    @li @c 1 No se produjo un error
*/

error SD_EnviarRecibirByte(byte,byte*);

//! Lee datos de la tarjeta
/*!
@param[in] lectura variable donde se almacenarán los datos leidos
@return Indica si hubo un error
    @li @c 1 No se produjo un error
    @li @c 5 Se produjo un error de timer
*/

error SD_Leer(dato lectura[]);

//! Escribe datos en la tarjeta
/*!
@param[in] direccion a partir de la cual se escribe
@param[in] datos a escribir
@return Indica si hubo un error
    @li @c 1 No se produjo un error
    @li @c 5 Se produjo un error de timer
*/

error SD_Escribir(byte *direccion,dato datos[][tam_dato]);

//! Establece el Baud Rate
/*!
@param[in] mod indica cual de los dos baud rate se establecerá
@return Indica si hubo un error
    @li @c 1 No se produjo un error
    @li @c 6 Se produjo un error, mod incorrecto
*/

error SD_SetBaudRateMode(byte);

//!Calcula y escribe direccion
/*!
@param[in] dir, direccion
@return Indica si hubo un error
    @li @c 1 No se produjo un error
    @li @c 7 Se produjo un error de direccion
*/

error SD_CalculaDireccion(byte *dir);

//! Escritura de prueba
/*!
@return Indica si hubo un error
    @li @c 1 No se produjo un error
    @li @c 5 Se produjo un error de tiemer
*/

error SD_escribirPrueba(void);

//! Controla si la sd está vacía
/*!
@return Indica si hubo un error
    @li @c 1 No se produjo un error
    @li @c 7 Se produjo un error de direccion
*/

error SD_Condatos(void);

//!Escribe dirección en tarjeta SD
/*!
@return Indica si hubo un error
    @li @c 1 No se produjo un error
    @li @c 5 Se produjo un error de tiemer
*/

error SD_EscribirDireccion(void);

//! Lee dirección de tarjeta SD
/*!
@return Indica si hubo un error
    @li @c 1 No se produjo un error
    @li @c 5 Se produjo un error de tiemer
*/

error SD_LeerDireccion(void);
