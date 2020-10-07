//Importations n�cessaires.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{	
	//Permet l'affichage des caract�res fran�ais.
	setlocale(LC_ALL, "fr-FR");

	//Quelques macros.
#define SEPARATEUR '/'
#define TAILLETAB1 20

	//On cr�e un tableau comportant 20 valeurs.
	int MyTab1[TAILLETAB1];

	//Cr�ation et initialisation du pointeur sur la derni�re valeur du tableau.
	int* MyPtr1 = &MyTab1[TAILLETAB1 - 1];

	//On remplit le tableau avec les nombres de 1 � 20.
	for (int i = 0;i < TAILLETAB1;i++)
	{
		MyTab1[i] = i + 1;		//Ex: la 3e valeur (i=2) prendra comme valeur 3 (2+1).
		printf("%d %c ", MyTab1[i], SEPARATEUR);	//Affiche les valeurs s�par�s par un "/".
	}

	//Affiche les valeurs du tableau dans l'ordre d�croissant avec le pointeur.
	for (int i = 0;i < TAILLETAB1;i++)
	{
		printf("%d %c ", *MyPtr1, SEPARATEUR);	//Affiche la valeur assign�e au pointeur.
		MyPtr1--;		//D�cale le pointeur sur la valeur d'avant.
	}

	return(EXIT_SUCCESS);	//Fin du programme.
}