#include "tipo_poke.h"

Poke* poke_crear(char* nombre, size_t puntos, Color color, char* patron) {
    Poke* poke = malloc(sizeof(Poke));
    if (poke == NULL) {
        return NULL;
    }
    poke->nombre = nombre;
    poke->color = color;
    poke->puntos = puntos;
    poke->patron = patron;
    // TODO!: Agrega posiciones random para x, y
    // poke->x = ;
    // poke->y = ;
    return poke;
}

void poke_destruir(Poke* p) {
}