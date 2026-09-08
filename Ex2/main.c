/******************************************************************************************************************
* Nom module fichier : main.c
* auteur : MOUNY Enzo
* Classe/Groupe : BTS CIEL2
* Date : 08/09/2026
* Projet : TP_Revision_c
* Environnement :
*                - Cible / Microprocesseur : x86 64
* 			     - IDE / Compilateur : Visual Studio 2026
* Description : Tableau 2d avec boucle while
* ****************************************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int tableau[2][10];
	int j = 0;

	//Remplissage du tableau avec une boucle while
	while (j < 10) {
		tableau[0][j] = j + 1; // 1ère ligne : nombre de 0 à 9
		tableau[1][j] = j * 3; // 2ème ligne : le triple de ces nombres	
		j++;
	}

	// Affichage pour vérifier les resultats
	printf("1ere ligne : ");
	j = 0;
	while (j < 10) {
		printf("%d ", tableau[0][j]);
		j++;
	}
	printf("\n");

	printf("2eme ligne : ");
	j = 0;
	while (j < 10) {
		printf("%d ", tableau[1][j]);
		j++;
	}
	printf("\n");

	return 0;
}