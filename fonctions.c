#include <stdlib.h>
#include "header.h"
#include "conio.h"

/*int select_color(char color){
    if (color == 'R')
        return 4;
    if (color=="B")
        return 1;
    if (color == 'G')
        return 2;
    if (color== 'O')
        return 6;
    if (color == 'Y')
        return 14;
    if (color == 'W')
        return 15;
}

*/
int side_to_index(T_SIDE side){
    if (side == "UP")
        return 1;
    if (side == "LEFT")
        return 2;
    if (side == "FRONT")
        return 3;
    if (side == "RIGHT")
        return 4;
    if (side == "BACK")
        return 5;
    if (side == "DOWN")
        return 0;
}
/*azert*/

char*** create_rubiks(char*** cube){
    cube = (char***) malloc(6* sizeof (char**));
    for (int i = 0; i<6; i++){
        *(cube+i) = (char**) malloc(3*sizeof(char*));
        for (int j = 0; j<3; j++)
            *(*(cube + i)+j) = (char*) malloc(3*sizeof (char));
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
