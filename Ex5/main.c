/******************************************************************************************************************
* Nom module fichier : main.c
* auteur : MOUNY Enzo
* Classe/Groupe : BTS CIEL2
* Date : 08/09/2026
* Projet : TP_Revision_c
* Environnement :
*                - Cible / Microprocesseur : x86 64
* 			     - IDE / Compilateur : Visual Studio 2026
* Description : allocation dynamique d'un octet de memoire pour stocker un caractere
* ****************************************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>    
#include <stdlib.h> //nécessaire pour malloc et free

int main() {
	//declaration d'un pointeur sur caractere 
	char* pointeurChar;

	//utiliser le pointeur pour allouer dynamiquement 1 octet
	pointeurChar = (char*)malloc(sizeof(char));

	//verifier si l'allocation a reussi
	if (pointeurChar == NULL) {
		printf("Erreur d'allocation de memoire.\n");
		return 1; // quitter le programme avec un code d'erreur
	}

	//affecter la lettre "l" a la memoire allouee 
	*pointeurChar = 'l';

	//afficher la valeur de la lettre stockee dans la memoire allouee
	printf("La lettre stockee dans la memoire allouee est : %c\n", *pointeurChar);

	//liberer la memoire allouee
	free(pointeurChar);

	return 0;

}