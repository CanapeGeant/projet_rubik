#include "conio.h"
#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Face* cube;
    cube = create_rubiks(cube);
    cube = blank_rubiks(cube);
    init_rubiks(cube);
    display_rubriks(cube);
    /*On initialise le cube*/

    //printf("%d", cube[2].Tab_carre[2][1]);
    //1 +(rand()%14)

    /*1+(rand()%14);&nb aléatoire entre 1 et 14*/
    c_textcolor(BLACK);
    printf("chips au poulet ");
    c_textcolor(BLUE);
    printf(" trompettiste ");
    c_textcolor(GREEN);
    printf(" Jean SOMA ");
    c_textcolor(CYAN);
    printf(" Saumon ");
    c_textcolor(RED);
    printf(" Quagsire ");
    c_textcolor(MAGENTA);
    printf(" Jus d'orange ");
    c_textcolor(BROWN);
    printf(" Etagere ");
    c_textcolor(LIGHTGRAY);
    printf(" J'aime pas ");
    c_textcolor(DARKGRAY);
    printf(" le langage C ");
    c_textcolor(LIGHTBLUE);
    printf(" a cause des points-virgules ");
    c_textcolor(LIGHTGREEN);
    printf(" Lavabo ");
    c_textcolor(LIGHTCYAN);
    printf(" Quagsire ");
    c_textcolor(LIGHTRED);
    printf(" Manger, c'est bien ");
    c_textcolor(LIGHTMAGENTA);
    printf("♦");
    c_textcolor(YELLOW);
    printf(" Pourquoi les profs nous laissent si peu de temps pour les projet ");
    c_textcolor(WHITE);
    printf(" Pourquoi les profs nous donnent tous les projet d'un coup ");
    c_textcolor(BLINK);
    printf(" J'ai plus d'inspi pour le nom de cette couleur");

    return 0;
}




