#ifndef __HASH_H__
#define __HASH_H__

#include <stdbool.h>
#include <stddef.h>

typedef struct hash Hash;

/**
 * Crea una tabla de hash con la capacidad especificada (o 3 si es menor a 3).
 *
 * Devuelve el hash creado o NULL en caso de error.
 *
 */
Hash *hash_crear(size_t capacidad_inicial);

//tamaño/cantidad
/**
 * Devuelve la cantidad de elementos en la tabla.
 *
 */
size_t hash_cantidad(Hash *hash);

//insertar/agregar
/**
 *
 * Inserta un elemento asociado a la clave en la tabla de hash.
 *
 * Si la clave ya existe en la tabla, modificamos el valor y ponemos el nuevo.
 * Si encontrado no es NULL, se almacena el elemento reemplazado en el mismo.
 *
 * Esta funcion almacena una copia de la clave.
 *
 * No se admiten claves nulas.
 *
 * Devuelve true si se pudo almacenar el valor.
 **/
bool hash_insertar(Hash *hash, char *clave, void *valor, void **encontrado);

/**
 * Busca el elemento asociado a la clave en la tabla.
 **/
void *hash_buscar(Hash *hash, char *clave);

/**
 *Devuelve si la clave existe en la tabla o no
 */
bool hash_contiene(Hash *hash, char *clave);

/**
 * Quita el elemento asociado a la clave de la tabla y lo devuelve.
 */
void *hash_quitar(Hash *hash, char *clave);

/**
 * Itera cada elemento del hash y aplica la función f.
 *
 * La iteración se corta al completar el total de elementos o cuando la función devuelve false.
 *
 * Devuelve la cantidad de veces que se aplica la función.
 */
size_t hash_iterar(Hash *hash, bool (*f)(char *, void *, void *), void *ctx);

/**
 * Destruye la tabla
 */
void hash_destruir(Hash *hash);
/**
 * Destruye la tabla y aplica el destructor a los elementos
 */
void hash_destruir_todo(Hash *hash, void (*destructor)(void *));

#endif /* __HASH_H__ */