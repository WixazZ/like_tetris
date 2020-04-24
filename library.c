//
// Created by parad on 02/04/2020.
//

#include <stdlib.h>
#include <stdio.h>
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreturn-stack-address"
#define VALEUR 5
#define ROUGE "\033[00;31m"
#define BLEU "\033[00;34m"
#define NORMAL "\033[00m"
#include <stdbool.h>
#include "library.h"



void print_board(int nb_lig, int nb_col, int score, int forme, int** tab_2D_choix_aleatoire[])
{
    if (forme==3){
        nb_lig=(nb_lig/2)+1;
        if((nb_col%2) ==0 ){
            nb_col--;
        }
    }
    int i, j;
    int k=nb_lig/26;
    int l=nb_col/26;
    int compteur_if=0;
    char alphabet_lower[] ={'a',  'b',  'c',  'd',  'e',  'f',  'g',  'h',  'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r','s','t', 'u', 'v', 'w', 'x', 'y', 'z'};
    char alphabet_upper[] = {'A', 'B',  'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P','Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int it=-2; it<=k-i/26; it++){
        printf(" ");
    }


    for(i=0; i<nb_col; i++) {
        compteur_if+=1;
        for(int it=0; it<2; it++) {
            printf(" ");
        }
        printf("%c", alphabet_lower[i % 26]);
    }

    if (compteur_if>=26) {
        printf("\n");
        compteur_if=0;
        printf("   ");
        for(j=0; j<=26; j++)
        {
            printf("   ");
        }
        for(i=0; i<nb_col-26; i++) {
            printf("%c", alphabet_lower[i % 26]);
            for(int it=0; it<2; it++) {
                printf(" ");
            }
        }
    }

    for(int it=0; it<5+2+1; it++) {
        printf(" ");
    }
    printf("\n");
    for (int it=-1; it<=k-i/26; it++){
        printf(" ");
    }
    printf("%c", 201); // ╔
    for (i=0;i!=(2+1)*nb_col+2;i++){
        printf("%c", 205); // ═
    } printf("%c", 187); // ╗
    printf("\n");

    for ( i=0;i<nb_lig; i++)
    {
        for (int it=0; it<=k-i/26; it++){
            printf(" ");
        }
        for (int itt=0; itt<=i/26; itt++) {
            printf("%c", alphabet_upper[i % 26]);
        }
        printf("%c",186); // ║
        for ( j=0;j<nb_col; j++)
        {
            for(int it=0; it<2; it++) {
                printf(" ");
            }
            if(plateau[i][j]==0)
            {
                printf("%c", ' ');
            }
            else if (plateau[i][j]==1)
            {
                printf("%c", '.');
            }
            else
            {
                printf("%c", 220);
            }
        }
        for(int it=0; it<2; it++)
        {
            printf(" ");
        }
        printf("%c",186); // ║
        if(i== 3){
            printf("               SCORE: %d", score);
        }
        if (i == 5){
            printf("   ");
            for (int colonne = 0; colonne <VALEUR; colonne++) {
                if (tab_2D_choix_aleatoire[0][0][colonne] == 0)
                    printf("%c",'.');
                else
                    printf("%c",220);
                printf(" ");
            }
            printf(" ");
            for (int colonne = 0; colonne <VALEUR; colonne++) {
                if (tab_2D_choix_aleatoire[1][0][colonne] == 0)
                    printf("%c",'.');
                else
                    printf("%c",220);
                printf(" ");
            }
            printf(" ");
            for (int colonne = 0; colonne <VALEUR; colonne++) {
                if (tab_2D_choix_aleatoire[2][0][colonne] == 0)
                    printf("%c",'.');
                else
                    printf("%c",220);
                printf(" ");
            }
        }else if (i == 6) {
                printf("   ");
                for (int colonne = 0; colonne <VALEUR; colonne++) {
                    if (tab_2D_choix_aleatoire[0][1][colonne] == 0)
                        printf("%c",'.');
                    else
                        printf("%c",220);
                    printf(" ");
                }
                printf(" ");
                for (int colonne = 0; colonne <VALEUR; colonne++) {
                    if (tab_2D_choix_aleatoire[1][1][colonne] == 0)
                        printf("%c",'.');
                    else
                        printf("%c",220);
                    printf(" ");
                }
                printf(" ");
                for (int colonne = 0; colonne <VALEUR; colonne++) {
                    if (tab_2D_choix_aleatoire[2][1][colonne] == 0)
                        printf("%c",'.');
                    else
                        printf("%c",220);
                    printf(" ");
                }
            }else if (i == 7) {
                printf("   ");
                for (int colonne = 0; colonne <VALEUR; colonne++) {
                    if (tab_2D_choix_aleatoire[0][2][colonne] == 0)
                        printf("%c",'.');
                    else
                        printf("%c",220);
                    printf(" ");
                }
                printf(" ");
                for (int colonne = 0; colonne <VALEUR; colonne++) {
                    if (tab_2D_choix_aleatoire[1][2][colonne] == 0)
                        printf("%c",'.');
                    else
                        printf("%c",220);
                    printf(" ");
                }
                printf(" ");
                for (int colonne = 0; colonne <VALEUR; colonne++) {
                    if (tab_2D_choix_aleatoire[2][2][colonne] == 0)
                        printf("%c",'.');
                    else
                        printf("%c",220);
                    printf(" ");
                }
            }else if (i == 8) {
            printf("   ");
            for (int colonne = 0; colonne <VALEUR; colonne++) {
                if (tab_2D_choix_aleatoire[0][3][colonne] == 0)
                    printf("%c",'.');
                else
                    printf("%c",220);
                printf(" ");
            }
            printf(" ");
            for (int colonne = 0; colonne <VALEUR; colonne++) {
                if (tab_2D_choix_aleatoire[1][3][colonne] == 0)
                    printf("%c",'.');
                else
                    printf("%c",220);
                printf(" ");
            }
            printf(" ");
            for (int colonne = 0; colonne <VALEUR; colonne++) {
                if (tab_2D_choix_aleatoire[2][3][colonne] == 0)
                    printf("%c",'.');
                else
                    printf("%c",220);
                printf(" ");
            }
        }else if (i == 9) {
            printf("   ");
            for (int colonne = 0; colonne <VALEUR; colonne++) {
                if ((colonne!= 0) && tab_2D_choix_aleatoire[0][4][colonne] == 0) {
                    printf("%c", '.');
                }else if((colonne== 0) && tab_2D_choix_aleatoire[0][4][0]==0){
                    printf(BLEU"%c"NORMAL,220);
                }else if((colonne== 0) && tab_2D_choix_aleatoire[0][4][0]==1){
                    printf(ROUGE"%c"NORMAL,220 );
                }else {
                    printf("%c",220);
                }
                printf(" ");
            }
            printf(" ");
            for (int colonne = 0; colonne <VALEUR; colonne++) {
                if ((colonne!= 0) && tab_2D_choix_aleatoire[1][4][colonne] == 0){
                    printf("%c",'.');
                }else if((colonne== 0) && tab_2D_choix_aleatoire[1][4][0]==0){
                    printf(BLEU"%c"NORMAL,220);
                }else if((colonne== 0) && tab_2D_choix_aleatoire[1][4][0]==1){
                    printf(ROUGE"%c"NORMAL,220);
                }else {
                    printf("%c",220);
                }
                printf(" ");
            }
            printf(" ");
            for (int colonne = 0; colonne <VALEUR; colonne++) {
                if ((colonne!= 0) && tab_2D_choix_aleatoire[2][4][colonne] == 0){
                    printf("%c",'.');
                }else if((colonne== 0) && tab_2D_choix_aleatoire[2][4][0]==0){
                    printf(BLEU"%c"NORMAL,220);
                }else if((colonne== 0) && tab_2D_choix_aleatoire[2][4][0]==1){
                    printf(ROUGE"%c"NORMAL,220);
                }else {
                    printf("%c",220);
                }
                printf(" ");
            }
        }else if (i == 11){
            printf("    Block 1   Block 2   Block 3");
        }
        printf("\n"); // A combiner avec le reste de l'écran pour l'affichage (Prochain bloc, etc.)
    }

    printf("  ");
    printf("%c",200); // ╚
    for (i=0;i!=(2+1)*nb_col+2;i++)
    {
        printf("%c", 205); // ═
    }
    printf("%c", 188); // ╝
    printf("\n");

}
int** creer_tab2D_dyn(int nblignes, int nbcolonnes) {
    int **tab = (int **) malloc(nblignes * sizeof(int *));
    for (int i = 0; i < nblignes; i++) {
        tab[i] = (int *) malloc(nbcolonnes * sizeof(int));

        //vide toute les cases mémoires
        for (int j = 0; j < nbcolonnes; ++j){
            tab[i][j] = 0;
        }
    }
#ifdef DEBUG
    printf("nblignes : %d\n",nblignes);
    printf("nbcolones : %d\n",nblignes);
    for (int k = 0; k < nblignes; ++k) {
        for (int l = 0; l < nbcolonnes; ++l) {
            printf("[%d]",plateau[k][l]);
        }
        printf("\n");
    }
#endif
    return tab;
}

void triangle(int taille) {
    int i, j, k, l;
    if (taille%2 ==0)
    {
        taille =taille-1;
    }
    int haut = (taille/2)+1;
    int out = taille/2;
    int in = 1;
    for ( i = 0; i < haut; ++i)
    {

        for ( j = 0; j < out; ++j)
        {
            plateau[i][j] = 0;
        }
        for ( k = 0; k < in; ++k)
        {
            j=k+out;
            plateau[i][j] = 1;
        }
        for ( l = 0; l < out; ++l)
        {
            j=out+in+l;
            plateau[i][j] = 0;
        }
        in = in + 2;
        out= out - 1;
    }
}

void cercle(int taille){
    int i, j, k, l;
    int partsup = (taille/2)+1;
    int partinf = taille;
    int out = 3;
    int in = taille-6;
    for (i = 0; i < 3; ++i)
    {
        for ( j = 0; j < out; ++j)
        {
            plateau[i][j] = 0;
        }
        for ( k = 0; k < in; ++k)
        {
            j=k+out;
            plateau[i][j] = 1;
        }
        for ( l = 0; l < out; ++l)
        {
            j=out+in+l;
            plateau[i][j] = 0;
        }
        in = in + 2;
        out= out - 1;
    }
    for (i = 3; i < taille-3; ++i)
    {
        for (j = 0; j < taille; ++j)
        {
            plateau[i][j] = 1;
        }
    }
    in = taille-2;
    out = 1;
    for (i = taille-3; i < taille; ++i)
    {
        for ( j = 0; j < out; ++j)
        {
            plateau[i][j] = 0;
        }
        for ( k = 0; k < in; ++k)
        {
            j=k+out;
            plateau[i][j] = 1;
        }
        for ( l = 0; l < out; ++l)
        {
            j=out+in+l;
            plateau[i][j] = 0;
        }
        in = in - 2;
        out= out + 1;
    }
}
void losange(int taille){
    int i, j, k, l;
    if (taille%2 ==0)
    {
        taille =taille-1;
    }
    int triasup = (taille/2)+1;
    int triainf = taille;
    int out = taille/2;
    int in = 1;
    for (i = 0; i < triasup; ++i)
    {

        for (j = 0; j < out; ++j)
        {
            plateau[i][j] = 0;
        }
        for (k = 0; k < in; ++k)
        {
            j=k+out;
            plateau[i][j] = 1;
        }
        for (l = 0; l < out; ++l)
        {
            j=out+in+l;
            plateau[i][j] = 0;
        }
        in = in + 2;
        out= out - 1;
    }
    out = 1;
    in = 19;
    for ( i = triasup; i < triainf; ++i)
    {

        for (j = 0; j < out; ++j)
        {
            plateau[i][j] = 0;
        }
        for (k = 0; k < in; ++k)
        {
            j=k+out;
            plateau[i][j] = 1;
        }
        for (l = 0; l < out; ++l)
        {
            j=out+in+l;
            plateau[i][j] = 0;
        }
        in = in - 2;
        out= out + 1;
    }
}

int etat_ligne(int colu,int i){
    for(int j=0;j<colu;j++){
        if (plateau[i][j] == 1){
            return 0;
        }
    }
    return 1;
}
int etat_colone(int line,int j){
    for(int i=0;i<line;i++){
        if (plateau[i][j] == 1){
            return 0;
        }
    }
    return 1;
}


int calcul_score(int score, int ligne, int colonne,int taille){
    int res;
    for (int i=0;i<taille;i++){
        res = etat_ligne(taille,i);
        if (res == 1){
            for (int j=0;j<taille;j++){
                if (plateau[i][j]==2){
                    plateau[i][j]=1;
                    score = score + 100 ;
                }
            }
        }
    }
    for (int i=0;i<taille;i++){
        res = etat_colone(taille,i);
        if (res == 1){
            for (int j=0;j<taille;j++){
                if (plateau[j][i]==2){
                    plateau[j][i]=1;
                    score = score + 100;
                }
            }
        }
    }
    return score;
}


void depose_block(int** remplir_plat, int** tab_Blocks, int Px, int Py, int taille_y) {

    for (int i = 0; i < VALEUR; ++i) {
        for (int j = 0; j < VALEUR; ++j) {
            if( (Px-i >=0) && (Py+j <= taille_y) )
                remplir_plat[Px - i][Py + j] = remplir_plat[Px - i][Py + j] + tab_Blocks[VALEUR - i -1][j];
        }
    }
}
void test_plateau(int** test_tableau, int taille){
    for (int i = 0; i < taille; ++i) {
        for (int j = 0; j < taille; ++j) {
            test_tableau[i][j] = plateau[i][j];
        }
    }
}

int verif_validite(int** block, int ligne, int colonne, int taille){
    int** test_tableau = creer_tab2D_dyn(taille,taille);
    test_plateau(test_tableau, taille);
    //nombre de 2 dans mon test plateau
    int nombre_de_2 = 0;
    for (int i = 0; i < taille; ++i) {
        for (int j = 0; j < taille; ++j) {
            if(test_tableau[i][j]==2){
                nombre_de_2++;
            }
        }
    }
    //nombre de 1 dans mon block
    int nombre_de_1 = 0;
    for (int i = 0; i < VALEUR; ++i) {
        for (int j = 0; j < VALEUR; ++j) {
            if(block[i][j]==1){
                nombre_de_1++;
            }
        }
    }
    depose_block(test_tableau,block,ligne,colonne,taille);
    int nombre_de_2_apres = 0;
    for (int i = 0; i < taille; ++i) {
        for (int j = 0; j < taille; ++j) {
            if(test_tableau[i][j]==2){
                nombre_de_2_apres++;
            }
        }
    }
    int verif=0;
    if(nombre_de_2_apres == (nombre_de_2+nombre_de_1)){
        verif =1;
    } else{
        verif = 0;
    }

    for (int i = 0; i < taille; ++i) {
        for (int j = 0; j < taille; ++j) {
            if (test_tableau[i][j] >= 3 || verif==0 || ((plateau[i][j] == 0) && (test_tableau[i][j]==1)) ){
                return 0;
            }
        }
    }
    return 1;
}

void remplir_tableau(int **tab_2D_choix_aleatoire[],int forme, int* valeur_sortie, int taille) {
    int essaie = 1;
    int score = 0;
    int ligne_choisie = 0;
    int colonne_choisie = 0;
    int valide =0;
    int choix_block_joueur;
    char choix_ligne_joueur;
    char choix_colonne_joueur;
    bool le_choix_est_valide;
    char choix_ligne_possible[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                     'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    char choix_colonne_possible[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
                                       'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    while (essaie <= 3 && valide==0) {
        if (essaie >= 2) {
            system("cls");
            print_board(taille,taille,valeur_sortie[1],forme,tab_2D_choix_aleatoire);
            printf("\n\nEssaie numero %d\n\n", essaie);
        }
        do {
            printf("Choisissez un block a placer (1, 2 ou 3): ");
            scanf("%d", &choix_block_joueur);
            fflush(stdin);
        } while ((choix_block_joueur != 1) && (choix_block_joueur != 2) && (choix_block_joueur != 3));

        if (choix_block_joueur == 1) {
            choix_block_joueur = 0;
        } else if (choix_block_joueur == 2) {
            choix_block_joueur = 1;
        } else {
            choix_block_joueur = 2;
        }

        le_choix_est_valide = false;
        while (le_choix_est_valide == false) {
            printf("Choisissez une ligne ou placer le block(lettre en MAJUSCULE) :");
            scanf("%c", &choix_ligne_joueur);
            fflush(stdin);
            for (int i = 0; i < sizeof(choix_ligne_possible); i++) {
                if (choix_ligne_possible[i] == choix_ligne_joueur) {
                    le_choix_est_valide = true;
                    ligne_choisie = i;
                }
            }

        }
        le_choix_est_valide = false;
        while (le_choix_est_valide == false) {
            printf("Choisissez une colonne ou placer le block(lettre en minuscule) :");
            scanf("%c", &choix_colonne_joueur);
            fflush(stdin);
            for (int i = 0; i < sizeof(choix_colonne_possible); i++) {
                if (choix_colonne_possible[i] == choix_colonne_joueur) {
                    le_choix_est_valide = true;
                    colonne_choisie = i;
                }
            }
        }

        if (verif_validite(tab_2D_choix_aleatoire[choix_block_joueur], ligne_choisie, colonne_choisie, taille) == 1) {
            valide=1;
            depose_block(plateau, tab_2D_choix_aleatoire[choix_block_joueur], ligne_choisie, colonne_choisie, taille);
            score = calcul_score(score, ligne_choisie, colonne_choisie, taille);
            valeur_sortie[0] = 1;
            valeur_sortie[1] = score + valeur_sortie[1];
        } else {
            essaie++;
        }
    }
    if(valide == 0){
        valeur_sortie[0] = 0;
        valeur_sortie[1] = score;
    }

}



void fill_2D_array(int nb_lig, int nb_col)
{
    int i, j;
    for (i=0;i<nb_lig; i++)
    {
        for (j=0;j<nb_col; j++)
        {
            plateau[i][j]=0;
        }
    }
    // placer les valeurs 1

    for (i=3;i<nb_lig-3; i++)
    {
        for (j=3;j<nb_col-3; j++)
        {
            plateau[i][j]=1;
        }
    }
}


void display_ascii(int** P, int nb_lig, int nb_col)
{
    int i, j;
    for (i=0;i<nb_lig; i++)
    {
        for (j=0;j<nb_col; j++)
        {
            if(P[i][j]==0)
            {
                printf("%3c", ' ');
            }
            else
            {
                if (P[i][j]==1)
                {
                    printf("%3c", '*');
                }
                else
                {
                    printf("%3c", '#');
                }

            }

        }
        printf("\n");
    }
}

/* ------- Free 2D array ------*/

void free_2D_array(int **A, int l, int c)
{
    int i;
    for(i=0;i<l;i++)
        free(A[i]);
    free(A);
}

void display_2D_array(int nb_lig, int nb_col)
{
    int i, j;
    for (i=0;i<nb_lig; i++)
    {
        for (j=0;j<nb_col; j++)
        {
            printf("%3d", plateau[i][j]) ;
        }
        printf("\n");
    }
}
int choixtaille(){
    int taille;
    do {
        printf("PROJET 1 C \n");
        printf("              CHOISISSEZ LA TAILLE!\n");
        printf("				(entre 21 et 26)\n");
        scanf("%d",&taille);
        fflush(stdin);
        system("cls");
    }while ((taille<21) || (taille>26));
    return(taille);
}
int choixplateau(int taille){
    int forme;
    do {
        printf("              CHOISISSEZ LA FORME!\n");
        printf("                 1.Cercle\n");
        printf("                 2.Losange\n");
        printf("                 3.Triangle\n");
        scanf("%d",&forme);
        system("cls");
        fflush(stdin);
    }while((forme!=1) &&(forme!=2) && (forme!=3));
    switch (forme) {
        case 1:{
            cercle(taille);
            break;
        }
        case 2:{
            losange(taille);
            break;
        }
        case 3:
            triangle(taille);
            break;
    }
    return forme;
}

//Fonction qui donne les bonnes valeurs au forme des tableau

void create_tab_plat_form(int forme, int *tab_block_forme) {
    int block;
    if(forme == 1){
        for (int i = 0; i < 32; i++) {
            tab_block_forme[i+1] = i;
        }

    } else if (forme == 2){
        block = 32;
        for (int i = 0; i < 43; ++i) {
            if(i<23){
                tab_block_forme[i+1] = i;
            }else{
                tab_block_forme[i+1] = block++;
            }
        }

    } else{
        block = 43;
        for (int i = 0; i < 31; ++i) {
            if(i < 20)
                tab_block_forme[i+1] = i;
            else
                tab_block_forme[i+1] = block++;
        }
    }
}


//RECUPERE LE FORME DU TABLEAU ET RETOURNE TROIS BLOCKS CHOISIS ALEATOIREMENT

int* rempli_tab_des_block_forme(int nbr_block_forme, int forme, int taille){

    if(forme == 1){
        nbr_block_forme = 32;
    }else if(forme == 2){
        nbr_block_forme = 34;
    }else{
        nbr_block_forme = 31;
    }
    int* tab_block_forme = (int *) malloc( (nbr_block_forme) * sizeof(int));
    tab_block_forme[0] = nbr_block_forme;
    create_tab_plat_form(forme, tab_block_forme);

#ifdef DEBUG
    for (int i = 0; i < nbr_block_forme+1; ++i) {
        printf("%d\n", tab_block_forme[i]);
    }
#endif
    return  tab_block_forme;
}

void choix_block_aleatoire(int nbr_block_forme, int** tab_Blocks[], int* tab_block_forme , int** tab_2D_choix_aleatoire[]){
    int tab_choix_alatoire[3];
    for (int i = 0; i < 3; ++i) {
        tab_choix_alatoire[i] = 1+(rand()%nbr_block_forme);
    }
    for (int j = 0; j <3; ++j) {
        tab_choix_alatoire[j] =  tab_block_forme[tab_choix_alatoire[j]];
    }
    for (int k = 0; k < 3; k++) {
        tab_2D_choix_aleatoire[k] = tab_Blocks[tab_choix_alatoire[k]];
    }
}

//BLOCK COMMUN A TOUS

void common_block_1(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

        block[4][0] = 1;
        block[3][0] = 1;
        block[4][1] = 1;

}
void common_block_2(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    block[3][0] = 1;
    block[4][1] = 1;
    block[3][1] = 1;

}
void common_block_3(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    block[4][0] = 1;
    block[4][1] = 1;
    block[3][1] = 1;
}
void common_block_4(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    block[4][0] = 1;
    block[3][0] = 1;
    block[3][1] = 1;
}
void common_block_5(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[3][0] = 1;

    for (int k = 0; k < VALEUR-2; ++k) {
        block[4][k]=1;
    }

}
void common_block_6(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[3][2] = 1;

    for (int k = 0; k < VALEUR-2; ++k) {
        block[4][k]=1;
    }

}
void common_block_7(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[2][0] = 1;

    for (int k = 2; k < VALEUR; ++k) {
        block[k][1]=1;
    }

}
void common_block_8(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[4][1] = 1;

    for (int k = 2; k < VALEUR; ++k) {
        block[k][0]=1;
    }

}
void common_block_9(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[3][1] = 1;

    for (int k = 2; k < VALEUR; ++k) {
        block[k][0]=1;
    }

}
void common_block_10(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[3][0] = 1;

    for (int k = 2; k < VALEUR; ++k) {
        block[k][1]=1;
    }

}
void common_block_11(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[3][1] = 1;

    for (int k = 0; k < VALEUR-2; ++k) {
        block[4][k]=1;
    }

}
void common_block_12(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[4][1] = 1;

    for (int k = 0; k < VALEUR-2; ++k) {
        block[3][k]=1;
    }

}
void common_block_13(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int k = 0; k < VALEUR-3; ++k) {
        block[3][k]=1;
    }

    for (int k = 1; k < VALEUR-2; ++k) {
        block[4][k]=1;
    }

}
void common_block_14(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int k = 0; k < VALEUR - 3; ++k) {
        block[4][k] = 1;
    }
    for (int k = 1; k < VALEUR - 2; ++k) {
        block[3][k] = 1;
    }
}
void common_block_15(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int k = 2; k < VALEUR - 1; ++k) {
        block[k][0] = 1;
    }
    for (int k = 3; k < VALEUR; ++k) {
        block[k][1] = 1;
    }
}
void common_block_16(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int k = 3; k < VALEUR; ++k) {
        block[k][0] = 1;
    }
    for (int k = 2; k < VALEUR - 1; ++k) {
        block[k][1] = 1;
    }
}
void common_block_17(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int k = 1; k < VALEUR; ++k) {
        block[k][0] = 1;
    }
}
void common_block_18(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int k = 0; k < VALEUR-1; ++k) {
        block[4][k] = 1;
    }

}
void common_block_19(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int k = 3; k < VALEUR; ++k) {
        block[k][0] = 1;
    }
    for (int k = 3; k < VALEUR; ++k) {
        block[k][1] = 1;
    }
}
void common_block_20(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[4][0] = 1;
}

// BLOCK CERCLE ET LOSANGE

void cercle_losange_block_1(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            block[i][j] = 1;
        }

    }
}
void cercle_losange_block_2(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 0; i < 5; i++) {
        block[i][0] = 1;

    }
}
void cercle_losange_block_3(int** block) {
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int j = 0; j < 5; j++) {
        block[4][j] = 1;

    }
}

// BLOCK POUR CERCLE

void cercle_block_2(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            block[i][j] = 1;
        }
    }
    block[1][0] = 0;
    block[4][0] = 0;
    block[1][3] = 0;
    block[4][3] = 0;
}
void cercle_block_3(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int i = 1; i < 5; i++) {
        block[i][0] = 1;
    }

    for (int j = 0; j < 4; j++) {
        block[4][j] = 1;

    }

    for (int i = 1; i < 5; i++) {
        block[i][3] = 1;
    }
}
void cercle_block_4(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int j = 0; j < 4; j++) {
        block[1][j] = 1;

    }

    for (int i = 1; i < 5; i++) {
        block[i][3] = 1;
    }
}
void cercle_block_5(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int j = 0; j < 4; j++) {
        block[3][j] = 1;

    }
    for (int j = 0; j < 3; j++) {
        block[4][j] = 1;
    }

}
void cercle_block_6(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int j = 0; j < 3; j++) {
        block[4][j] = 1;
    }

    for (int j = 0; j < 3; j++) {
        block[1][j] = 1;
    }

    for (int i = 1; i < 4; i++) {
        block[i][2] = 1;
    }

}
void cercle_block_7(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int i = 1; i < 5; i++) {
        block[i][0] = 1;

    }
    for (int i = 1; i < 5; i++) {
        block[i][1] = 1;

    }

}
void cercle_block_8(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int j = 0; j < 4; j++) {
        block[4][j] = 1;

    }
    for (int j = 0; j < 4; j++) {
        block[3][j] = 1;

    }

}
void cercle_block_10(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 3; i < 5; ++i) {
        block[i][0] = 1;
    }
    for (int i = 3; i < 5; ++i) {
        block[i][4] = 1;
    }
    for (int j = 0; j < 5; ++j) {
        block[3][j] = 1;
    }
}
void cercle_block_12(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 1; i < 5; ++i) {
        block[i][0] = 1;
    }
    for (int j = 0; j < 4; ++j) {
        block[4][j] = 1;
    }
    block[3][3]=1;
}

// BLOCK POUR LOSANGE

void losange_block_1(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 3; i < 5; i++) {
            block[i][0] = 1;
    }
    for (int i = 2; i < 4; i++) {
        block[i][1] = 1;
    }
    for (int i = 1; i < 3; i++) {
        block[i][2] = 1;
    }
    block[1][3] = 1;
}
void losange_block_2(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int i = 1; i < 3; i++) {
        block[i][0] = 1;
    }
    for (int i = 2; i < 4; i++) {
        block[i][1] = 1;
    }
    for (int i = 3; i < 5; i++) {
        block[i][2] = 1;
    }
    block[4][3] = 1;
}
void losange_block_3(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 1; i < 3; i++) {
        block[i][1] = 1;
    }
    for (int i = 2; i < 4; i++) {
        block[i][2] = 1;
    }
    for (int i = 3; i < 5; i++) {
        block[i][3] = 1;
    }
    block[1][0] = 1;
}
void losange_block_4(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 3; i < 5; i++) {
        block[i][1] = 1;
    }
    for (int i = 2; i < 4; i++) {
        block[i][2] = 1;
    }
    for (int i = 1; i < 3; i++) {
        block[i][3] = 1;
    }
    block[4][0] = 1;
}
void losange_block_5(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int j = 0; j < 4; j++) {
        block[1][j] = 1;
    }
    for (int i = 1; i < 5; i++) {
        block[i][1] = 1;
    }
    for (int i = 1; i < 5; i++) {
        block[i][2] = 1;
    }
}
void losange_block_7(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int i = 2; i < 4; i++) {
        for (int j = 1; j < 3; ++j) {
            block[i][j] = 1;
        }
    }
    block[1][0] = 1;
    block[4][0] = 1;
    block[1][3] = 1;
    block[4][3] = 1;
}
void losange_block_8(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }

    for (int j = 0; j < 4; j++) {
        block[3][j] = 1;
    }
    for (int i = 2; i < 5; i++) {
        block[i][3] = 1;
    }
}
void losange_block_10(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int j = 0; j < 4; j++) {
        block[3][j] = 1;
    }
    block[4][3] = 1;
}
void losange_block_11(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int j = 0; j < 5; j++) {
        block[2][j] = 1;
    }
    for (int j = 1; j < 4; j++) {
        block[3][j] = 1;
    }
    block[4][2] = 1;
}
void losange_block_12(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 1; i < 5; ++i) {
        block[i][1] = 1;
    }
    block[1][0] = 1;
}
void losange_block_14(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 1; i < 5; ++i) {
        block[i][0] = 1;
    }
    block[4][1] = 1;
}

// BLOCK POUR triangle

void triangle_block_1(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int j = 0; j < 3; j++) {
        block[3][j] = 1;
    }
    block[2][0] = 1;
    block[4][2] = 1;

}
void triangle_block_2(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 2; i < 5; i++) {
        block[i][1] = 1;
    }
    block[2][0] = 1;
    block[4][2] = 1;
}
void triangle_block_3(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int j = 0; j < 3; j++) {
        block[3][j] = 1;
    }
    block[2][2] = 1;
    block[4][0] = 1;
}
void triangle_block_4(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 2; i < 5; i++) {
        block[i][1] = 1;
    }
    block[2][2] = 1;
    block[4][0] = 1;
}
void triangle_block_5(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[4][0]=1;
    block[3][1]=1;
    block[2][2]=1;
}
void triangle_block_6(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[2][0]=1;
    block[3][1]=1;
    block[4][2]=1;
}
void triangle_block_7(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 2; i < 5; i++) {
        block[i][0] = 1;
    }
}
void triangle_block_8(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int j = 0; j < 3; ++j) {
        block[4][j] = 1;
    }
}
void triangle_block_9(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[4][0]=1;
    block[3][0]=1;
}
void triangle_block_10(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    for (int i = 2; i < 5; ++i) {
        block[i][1] = 1;
    }
    for (int j = 0; j < 3; ++j) {
        block[3][j] = 1;
    }
}
void triangle_block_11(int** block){
    for (int i = 0; i < VALEUR; i++) {
        for (int j = 0; j < VALEUR; j++) {
            block[i][j] = 0;
        }
    }
    block[4][0]=1;
    block[4][1]=1;
}

void create_tab_blocks(int** tab_Blocks[54]) {
    for (int forme = 0; forme < 54; forme++) {
        int **block = creer_tab2D_dyn(VALEUR, VALEUR);
        switch (forme) {

            //BLOCK COMMON
            case 0: {
                common_block_1(block);
                break;
            }
            case 1: {
                common_block_2(block);
                break;
            }
            case 2: {
                common_block_3(block);
                break;
            }
            case 3: {
                common_block_4(block);
                break;
            }
            case 4: {
                common_block_5(block);
                break;
            }
            case 5: {
                common_block_6(block);
                break;
            }
            case 6: {
                common_block_7(block);
                break;
            }
            case 7: {
                common_block_8(block);
                break;
            }
            case 8: {
                common_block_9(block);
                break;
            }
            case 9: {
                common_block_10(block);
                break;
            }
            case 10: {
                common_block_11(block);
                break;
            }
            case 11: {
                common_block_12(block);
                break;
            }
            case 12: {
                common_block_13(block);
                break;
            }
            case 13: {
                common_block_14(block);
                break;
            }
            case 14: {
                common_block_15(block);
                break;
            }
            case 15: {
                common_block_16(block);
                break;
            }
            case 16: {
                common_block_17(block);
                break;
            }
            case 17: {
                common_block_18(block);
                break;
            }
            case 18: {
                common_block_19(block);
                break;
            }
            case 19: {
                common_block_20(block);
                break;
            }

            //CERCLE ET LOSANGE

            case 20: {
                cercle_losange_block_1(block);
                break;
            }
            case 21: {
                cercle_losange_block_2(block);
                break;
            }
            case 22: {
                cercle_losange_block_3(block);
                break;
            }

            //CERCLE

            case 23: {
                cercle_block_2(block);
                break;
            }
            case 24: {
                cercle_block_3(block);
                break;
            }
            case 25: {
                cercle_block_4(block);
                break;
            }
            case 26: {
                cercle_block_5(block);
                break;
            }
            case 27: {
                cercle_block_6(block);
                break;
            }
            case 28: {
                cercle_block_7(block);
                break;
            }
            case 29: {
                cercle_block_8(block);
                break;
            }
            case 30: {
                cercle_block_10(block);
                break;
            }
            case 31: {
                cercle_block_12(block);
                break;
            }

            // LOSANGE

            case 32: {
                losange_block_1(block);
                break;
            }
            case 33: {
                losange_block_2(block);
                break;
            }
            case 34: {
                losange_block_3(block);
                break;
            }
            case 35: {
                losange_block_4(block);
                break;
            }
            case 36: {
                losange_block_5(block);
                break;
            }
            case 37: {
                losange_block_7(block);
                break;
            }
            case 38: {
                losange_block_8(block);
                break;
            }
            case 39: {
                losange_block_10(block);
                break;
            }
            case 40: {
                losange_block_11(block);
                break;
            }
            case 41: {
                losange_block_12(block);
                break;
            }
            case 42: {
                losange_block_14(block);
                break;
            }

            // TRIANGLE

            case 43: {
                triangle_block_1(block);
                break;
            }
            case 44: {
                triangle_block_2(block);
                break;
            }
            case 45: {
                triangle_block_3(block);
                break;
            }
            case 46: {
                triangle_block_4(block);
                break;
            }
            case 47: {
                triangle_block_5(block);
                break;
            }
            case 48: {
                triangle_block_6(block);
                break;
            }
            case 49: {
                triangle_block_7(block);
                break;
            }
            case 50: {
                triangle_block_8(block);
                break;
            }
            case 51: {
                triangle_block_9(block);
                break;
            }
            case 52: {
                triangle_block_10(block);
                break;
            }
            case 53: {
                triangle_block_11(block);
                break;
            }
        }
        tab_Blocks[forme] = block;
    }
}
