#ifndef PROJET_RUBIK_HEADER_H
#define PROJET_RUBIK_HEADER_H
#include <stdlib.h>

#endif //PROJET_RUBIK_HEADER_H




typedef enum { UP, LEFT, FRONT, RIGHT, BACK,  DOWN } T_SIDE ;
typedef enum { W , O, G, R, B, Y, LG} T_COLOR ;
typedef struct {
    T_SIDE nom_side;
    T_COLOR ** Tab_carre;
}Face;
int select_color(T_COLOR color);
T_COLOR select_color_from_char(char color);
Face* init_rubiks(Face* cube);
Face* blank_rubiks(Face* cube);
char side_to_index_char(T_SIDE side);
int side_to_index(T_SIDE side);
T_COLOR side_to_color(T_SIDE side);
T_SIDE side_to_index_char_inv(char side);
Face* create_rubiks(Face* cube);
void display_letter(T_COLOR color);
void display_rubriks (Face* cube);
Face* fill_rubiks(Face* cube);



