#ifndef TDA_TABLERO_PRIV_H
#define TDA_TABLERO_PRIV_H

#include "tda_tablero.h"

typedef char* str_t;

struct tablero {
    str_t matriz[ALTO][ANCHO]; // matriz de strings
    Jugador* jugador;
    Pokedex* pokes;
    size_t ancho;
    size_t alto;
    // TODO!: Verifica si agregar atributos de tiempo
};

// VERIFICACIONES
bool entrada_es_valida(Tablero* t, Direccion entrada);
bool poke_entrada_es_valida(Tablero* t, Poke* p, Patron entrada);
bool es_direccion_valida(Tablero* t, Poke* p, Direccion d);
bool esta_en_rango(Tablero* t, size_t x, size_t y, Direccion d);

// MOVIMIENTOS
void tablero_mover_poke(Tablero* t, Poke* p, Patron patron);
void mover_entidad(size_t *x, size_t *y, Direccion d);

// UTILS
char** matriz_crear(size_t ancho, size_t alto);
void matriz_print(str_t m[ALTO][ANCHO]);

Direccion patron_a_direccion(Patron p);
Direccion direccion_inversa(Direccion d);
void mover_random(Poke* p);

#endif
