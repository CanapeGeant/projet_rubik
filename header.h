#ifndef PROJET_RUBIK_HEADER_H
#define PROJET_RUBIK_HEADER_H
#include <stdlib.h>

#endif //PROJET_RUBIK_HEADER_H


int side_to_index(char side);
char*** create_rubiks(char*** cube);
typedef enum { UP, LEFT, FRONT, RIGHT, BACK,  DOWN } T_SIDE ;
typedef enum { W, O, G, R, B, Y} T_COLOR ;
int select_color(char color);

typedef struct {
    T_SIDE nom_side;
    T_COLOR ** Tab_carre;
}Test_tab;