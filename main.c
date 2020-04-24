#include "library.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define DEBUG


int main() {
    srand((unsigned)time(NULL));
    int taille = choixtaille();
    plateau = creer_tab2D_dyn(taille,taille);
    int forme = choixplateau(taille);
    int* valeur_sortie = (int *) malloc( 2 * sizeof(int));
    valeur_sortie[0]=1;
    valeur_sortie[1]=0;
    int** tab_Blocks[54];
    create_tab_blocks(tab_Blocks);
    int nbr_block_forme = 0;
    int ** tab_2D_choix_aleatoire[3];

    int* tab_block_forme = rempli_tab_des_block_forme(nbr_block_forme,forme, taille);
    nbr_block_forme = tab_block_forme[0];

    while (valeur_sortie[0] == 1) {

        choix_block_aleatoire(nbr_block_forme, tab_Blocks, tab_block_forme, tab_2D_choix_aleatoire);



        //display_2D_array(taille,taille);

        print_board(taille, taille, valeur_sortie[1], forme, tab_2D_choix_aleatoire);


        remplir_tableau(tab_2D_choix_aleatoire,forme ,valeur_sortie, taille);
        system("cls");

    }
    printf("              GAME OVER\n\nVotre Score est de : %d\n\n",valeur_sortie[1]);
    system("PAUSE");
    return 0;
}
