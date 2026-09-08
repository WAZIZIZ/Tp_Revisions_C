/******************************************************************************************************************
* Nom module fichier : main.c
* auteur : MOUNY Enzo
* Classe/Groupe : BTS CIEL2
* Date : 08/09/2026
* Projet : TP_Revision_c
* Environnement :
*                - Cible / Microprocesseur : x86 64
* 			     - IDE / Compilateur : Visual Studio 2026
* Description : passage de parametre par adresse
* ****************************************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//definition de la fonction selon le prototype demandé
void Produit(int a, int b, int* c) {
	*c = a * b; //calcul du produit et stockage dans la variable pointée par c
}

int main() {
	int x = 6;
	int y = 7;
	int resultat = 0;


	//appel de la fonction Produit en passant les adresses des variables x, y et resultat
	Produit(x, y, &resultat);

	//affichage du resultat
	printf("le produit de %d et %d est : %d\n", x, y, resultat);

	return 0;
}
    