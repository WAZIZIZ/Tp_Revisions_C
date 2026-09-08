/******************************************************************************************************************
* Nom module fichier : main.c
* auteur : MOUNY Enzo
* Classe/Groupe : BTS CIEL2
* Date : 08/09/2026
* Projet : TP_Revision_c
* Environnement :
*                - Cible / Microprocesseur : x86 64
* 			     - IDE / Compilateur : Visual Studio 2026
* Description : Programme qui demande à l'utilisateur de saisir un nombre entier et affiche sa valeur absolue.
* ****************************************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int tableau[2][10];
	int j;

	// Saisie des valeurs dans le tableau
	for (j = 0; j < 10; j++) {
		tableau[0][j] = j + 1; // 1ère ligne : nombre de 0 à 9
		tableau[1][j] = j * 3; // 2ème ligne : le triple de ces nombres	
	}

	// Affichage pour vérifier les resultats
	printf("1ere ligne : ");
	for (j = 0; j < 10; j++) {
		printf("%d ", tableau[0][j]);
	}
	printf("\n");

	printf("2eme ligne : ");
	for (j = 0; j < 10; j++) {
		printf("%d ", tableau[1][j]);
	}
	printf("\n");

	return 0;
}