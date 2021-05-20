#include <stdlib.h>
#include <stdio.h>
#include "header.h"
#include "conio.h"

int select_color(T_COLOR color){
    if (color == R)
        return 4;
    if (color==B)
        return 1;
    if (color == G)
        return 2;
    if (color== O)
        return 6;
    if (color == Y)
        return 14;
    if (color == W)
        return 15;
}

int side_to_index(T_SIDE side){
    if (side == UP)
        return 0;
    if (side == LEFT)
        return 1;
    if (side == FRONT)
        return 2;
    if (side == RIGHT)
        return 3;
    if (side == BACK)
        return 4;
    if (side == DOWN)
        return 5;
}


Face* create_rubiks(Face* cube){

    cube = (Face*) malloc(6*sizeof (Face));
    for (int i = 0; i<6; i++){
        cube[i].Tab_carre = (T_COLOR**) malloc(3 * sizeof (T_COLOR*));
        for (int j = 0; j<3; j++){
            cube[i].Tab_carre[j] = (T_COLOR*) malloc(3 * sizeof (T_COLOR));
        }
    }
    return cube;
}
/*char *** init_rubiks(char*** cube){
    T_SIDE side;
    T_COLOR color;
    int ncolor;
    for (side = UP, color = W; side <= DOWN, color <= Y; side++, color++) {
        ncolor = select_color(color);
        for (int i = 0; i<3; i++){
            for (int j = 0; j <3; j++){
                c_textcolor(ncolor);
                *(*(*(cube + side) + i)+j) = color;
            }
        }
    }
}*/

void display_rubriks (Face* cube)
{
    for (int i = 0; i<3; i++)
    {
        printf("      ");
        for (int j = 0; j<3; j++)
        {
            printf("%d", cube[0].Tab_carre[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<3; i++)
    {
        for (int x=1; x<4; x++)
        {
            printf("%d");
            for (int j = 0; j<3; j++)
            {
                printf("%d", cube[x].Tab_carre[j][i]);
            }
        }
        printf("\n");
    }
    for (int i = 0; i<3; i++)
    {
        printf("      ");
        for (int j = 0; j<3; j++)
        {
            printf("%d", cube[0].Tab_carre[i][j]);
        }
        printf("\n");
    }
}
