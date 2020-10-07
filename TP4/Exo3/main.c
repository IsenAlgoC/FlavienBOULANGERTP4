//Imports n�cessaires.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	//Permet l'affichage des caract�res fran�ais.
	setlocale(LC_ALL, "fr_FR");

	//D�claration des chaines/char utilis�es.
	char Nom[20], Prenom[20], Sexe;

	printf("Nom du Candidat: ");
	scanf_s("%s", Nom, 19);			//L'utilisateur rentre son Nom. 19 caract�res max.
	printf("Pr�nom du candidat: ");
	scanf_s("%s", Prenom, 19);			//L'utilisateur rentre son pr�nom. 19 caract�res max.
	printf("Sexe du Candidat (Homme[H] ou Femme[F]): ");
	Sexe = (char)_getch();		//L'utilisateur tape une lettre (H ou F) au clavier qui est automatiquement r�cup�r�e.

	//Le texte est adapt� en fonction de la lettre tap�e.
	switch (Sexe) 
	{
		case 'H': 
			printf("\n\nMonsieur");
		case 'F':
			printf("\n\nMadame");
		default:
			printf("\n\nBonjour");	//Si la lettre n'est pas H ou F, Ce message est affich� � la place.
	}
	printf(" %s %s,\nBienvenue sur votre page d'accueil.\n\n", Prenom, Nom);	//Message custom selon sexe, nom et pr�nom.

	return(EXIT_SUCCESS);	//Fin du programme.
}