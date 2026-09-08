/******************************************************************************************************************
* Nom module fichier : main.c
* auteur : MOUNY Enzo
* Classe/Groupe : BTS CIEL2
* Date : 08/09/2026
* Projet : TP_Revision_c
* Environnement :
*                - Cible / Microprocesseur : x86 64
* 			     - IDE / Compilateur : Visual Studio 2026
* Description : structure GPS sur une pile et tas
* ****************************************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//Declaration de la structure GPS
typedef struct 
{
	float latitude;
	float longitude;
} GPS;

int main() {
	// Déclaration d'une variable de type GPS sur la pile
	GPS pointPile;
	pointPile.latitude = 48.8566f; // Latitude de Paris
	pointPile.longitude = 2.3522f; // Longitude de Paris

	GPS* pointTas = (GPS*)malloc(sizeof(GPS)); // Allocation dynamique sur le tas
	
	if (pointTas == NULL) {
		printf("Erreur d'allocation mémoire\n");
		return 1; // Retourne une erreur si l'allocation échoue
	}
	pointTas->latitude = 34.0522f; // Latitude de Los Angeles
	pointTas->longitude = -118.2437f; // Longitude de Los Angeles	

	printf("coordonnées GPS (sur la pile) :\n");
	printf("Latitude : %.4f, Longitude : %.4f\n", pointPile.latitude, pointPile.longitude);

	printf("\ncoordonnées GPS (sur le tas) :\n");
	printf("Latitude : %.4f, Longitude : %.4f\n", pointTas->latitude, pointTas->longitude);

	// Libération de la mémoire allouée pour le GPS sur le tas
	free(pointTas);
	return 0;
}