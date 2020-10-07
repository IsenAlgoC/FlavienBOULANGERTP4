//Importations nécessaires.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{	
	//Permet l'affichage des caractères français.
	setlocale(LC_ALL, "fr-FR");

	//Quelques macros.
#define SEPARATEUR '/'
#define TAILLETAB1 20

	//On crée un tableau comportant 20 valeurs.
	int MyTab1[TAILLETAB1];

	//Création et initialisation du pointeur sur la dernière valeur du tableau.
	int* MyPtr1 = &MyTab1[TAILLETAB1 - 1];

	//On remplit le tableau avec les nombres de 1 à 20.
	for (int i = 0;i < TAILLETAB1;i++)
	{
		MyTab1[i] = i + 1;		//Ex: la 3e valeur (i=2) prendra comme valeur 3 (2+1).
		printf("%d %c ", MyTab1[i], SEPARATEUR);	//Affiche les valeurs séparés par un "/".
	}

	//Affiche les valeurs du tableau dans l'ordre décroissant avec le pointeur.
	for (int i = 0;i < TAILLETAB1;i++)
	{
		printf("%d %c ", *MyPtr1, SEPARATEUR);	//Affiche la valeur assignée au pointeur.
		MyPtr1--;		//Décale le pointeur sur la valeur d'avant.
	}

	return(EXIT_SUCCESS);	//Fin du programme.
}