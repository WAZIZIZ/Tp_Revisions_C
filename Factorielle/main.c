/******************************************************************************************************************
* Nom module fichier : main.c
* auteur : MOUNY Enzo
* Classe/Groupe : BTS CIEL2
* Date : 08/09/2026
* Projet : TP_Revision_c
* Environnement :
*                - Cible / Microprocesseur : x86 64
* 			     - IDE / Compilateur : Visual Studio 2026
* Description : programme qui demande à l'utilisateur de saisir un nombre entier et affiche sa factorielle.
* ****************************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int cpt = 0;
	int resultat = 1;

	printf("saisir un nombre entier : ");
	scanf("%d", &n);


	if (n < 0) {
		printf("le nombre saisi 'est pas valide\n");
	}
	else {
		while (n > 0) {
			resultat = resultat * n;
			n--;
		}
		printf("le resultat est : %d\n", resultat);

		return 0;

	}
}