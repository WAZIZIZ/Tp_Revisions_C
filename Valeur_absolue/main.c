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
	int V;

	// Demande à l'utilisateur de saisir un nombre entier   
	printf("saisir un nombre entier : ");
	scanf("%d", &V);

	// Calcule la valeur absolue de V
	if (V >= 0) {
		printf("la valeur absolue est : %d\n", V);
	}
	else {
		printf("la valeur absolue est : %d\n", -V);
	}

	return 0;
}