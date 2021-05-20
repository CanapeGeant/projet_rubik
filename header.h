#ifndef PROJET_RUBIK_HEADER_H
#define PROJET_RUBIK_HEADER_H
#include <stdlib.h>

#endif //PROJET_RUBIK_HEADER_H



char*** create_rubiks(char*** cube);
typedef enum { UP, LEFT, FRONT, RIGHT, BACK,  DOWN } T_SIDE ;
typedef enum { W, O, G, R, B, Y} T_COLOR ;
//int select_color(T_COLOR color);
int side_to_index(T_SIDE side);
typedef struct {
    T_SIDE nom_side;
    T_COLOR ** Tab_carre;
}Face;
