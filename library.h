//
// Created by parad on 02/04/2020.
//

#ifndef PROJET1C_LIBRARY_H
#define PROJET1C_LIBRARY_H

int** plateau;
int** creer_tab2D_dyn(int nblignes, int nbcolonnes);


void fill_2D_array(int i, int i1);

void display_2D_array(int nb_lig, int nb_col);
void losange(int taille);
void cercle(int taille);
void triangle(int taille);

void create_tab_blocks(int** tab_Blocks[50]);
int choixtaille();
void free_2D_array(int **A, int l, int c);
void print_board(int nb_lig, int nb_col, int score, int forme, int** tab_2D_choix_aleatoire[]);

void remplir_tableau(int **tab_2D_choix_aleatoire[],int forme, int* valeur_sortie, int taille);

int* rempli_tab_des_block_forme(int nbr_block_forme,int forme, int taille);
int choixplateau(int taille);
void choix_block_aleatoire(int nbr_block_forme,  int** tab_Blocks[], int* tab_block_forme, int ** tab_2D_choix_aleatoire[]);

#endif //PROJET1C_LIBRARY_H
