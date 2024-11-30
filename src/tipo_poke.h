#ifndef TIPO_POKE_H
#define TIPO_POKE_H

#include "tipos.h"
#include "io_csv.h"

typedef struct poke {
    char* nombre;
    Color color;
    size_t puntos;
    size_t x;
    size_t y;
    char* patron;
} Poke;

// INIT & DEINIT
Poke* poke_crear(char* nombre, size_t puntos, Color color, char* patron);
void poke_destruir(void*);

// UTILS
void poke_inicial_color(Poke* p, char* dest);

// IO & CSV
void poke_print(Poke* p, FILE* archivo);
Poke* poke_leer(CSV* csv);

#endif
