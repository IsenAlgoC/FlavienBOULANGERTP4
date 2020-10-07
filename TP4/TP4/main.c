//Imports necessaires pour les fonctions utilisées
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "tp4.h"

int main()
{
	//Permet l'affichage de caractères français.
	setlocale(LC_ALL, "fr_FR");

	//Déclaration des variables de type HEURE.
	HEURE HeureDebut, HeureFin, Duree;

	//Initialisation des variables.
	HeureDebut.heure = 12, HeureDebut.minute = 30;
	Duree.heure = 0, Duree.minute = 45;
	
	//Pour simplifier la lecture, je crée une variable contenant la somme des minutes.
	int TotalMinutes = HeureDebut.minute + Duree.minute;

	//Calculs de l'heure finale.
	HeureFin.minute = TotalMinutes%60;			//On prend le modulo à 60 de la somme pour que 75 affiche 15 (75=60+15).
	HeureFin.heure = HeureDebut.heure + Duree.heure + TotalMinutes/60;		//Somme des heures avec suppléments si la somme des minutes >60.

	//Affichage des différentes heures.
	printf("Il est %d:%d.\nAprès %.2d:%d il sera %d:%d.\n",
		HeureDebut.heure, HeureDebut.minute,		//Heure de départ.
		Duree.heure, Duree.minute,					//Durée ajoutée.
		HeureFin.heure,HeureFin.minute);			//Heure d'arrivée.

	return(EXIT_SUCCESS);		//Fin du programme.
}