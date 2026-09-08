/******************************************************************************************************************
* Nom module fichier : main.c
* auteur : MOUNY Enzo
* Classe/Groupe : BTS CIEL2
* Date : 08/09/2026
* Projet : TP_Revision_c
* Environnement :
*                - Cible / Microprocesseur : x86 64
* 			     - IDE / Compilateur : Visual Studio 2026
* Description : fonction somme 
* ****************************************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
	int valeur1 = 12;
	int valeur2 = 30;
	int resultat = somme(valeur1, valeur2);

	printf("la somme de %d et de %d est : %d\n", valeur1, valeur2, resultat);
	
	return 0;
}
