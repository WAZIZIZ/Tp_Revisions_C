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
	char caractere; 
	char* pointeurChar;

	//faire pointer le pointeur sur la variable 
	pointeurChar = &caractere;

	//initialiser la variable a la valeur "z" a l'aide du pointeur
	*pointeurChar = 'z';

	printf("La valeur de la variable caractere est : %c\n", caractere);

	return 0;
}