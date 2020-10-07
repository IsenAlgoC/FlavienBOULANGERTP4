//Imports necessaires pour les fonctions utilis�es
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "tp4.h"

int main()
{
	//Permet l'affichage de caract�res fran�ais.
	setlocale(LC_ALL, "fr_FR");

	//D�claration des variables de type HEURE.
	HEURE HeureDebut, HeureFin, Duree;

	//Initialisation des variables.
	HeureDebut.heure = 12, HeureDebut.minute = 30;
	Duree.heure = 0, Duree.minute = 45;
	
	//Pour simplifier la lecture, je cr�e une variable contenant la somme des minutes.
	int TotalMinutes = HeureDebut.minute + Duree.minute;

	//Calculs de l'heure finale.
	HeureFin.minute = TotalMinutes%60;			//On prend le modulo � 60 de la somme pour que 75 affiche 15 (75=60+15).
	HeureFin.heure = HeureDebut.heure + Duree.heure + TotalMinutes/60;		//Somme des heures avec suppl�ments si la somme des minutes >60.

	//Affichage des diff�rentes heures.
	printf("Il est %d:%d.\nApr�s %.2d:%d il sera %d:%d.\n",
		HeureDebut.heure, HeureDebut.minute,		//Heure de d�part.
		Duree.heure, Duree.minute,					//Dur�e ajout�e.
		HeureFin.heure,HeureFin.minute);			//Heure d'arriv�e.

	return(EXIT_SUCCESS);		//Fin du programme.
}