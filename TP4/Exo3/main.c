//Imports nécessaires.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	//Permet l'affichage des caractères français.
	setlocale(LC_ALL, "fr_FR");

	//Déclaration des chaines/char utilisées.
	char Nom[20], Prenom[20], Sexe;

	printf("Nom du Candidat: ");
	scanf_s("%s", Nom, 19);			//L'utilisateur rentre son Nom. 19 caractères max.
	printf("Prénom du candidat: ");
	scanf_s("%s", Prenom, 19);			//L'utilisateur rentre son prénom. 19 caractères max.
	printf("Sexe du Candidat (Homme[H] ou Femme[F]): ");
	Sexe = (char)_getch();		//L'utilisateur tape une lettre (H ou F) au clavier qui est automatiquement récupérée.

	//Le texte est adapté en fonction de la lettre tapée.
	switch (Sexe) 
	{
		case 'H': 
			printf("\n\nMonsieur");
		case 'F':
			printf("\n\nMadame");
		default:
			printf("\n\nBonjour");	//Si la lettre n'est pas H ou F, Ce message est affiché à la place.
	}
	printf(" %s %s,\nBienvenue sur votre page d'accueil.\n\n", Prenom, Nom);	//Message custom selon sexe, nom et prénom.

	return(EXIT_SUCCESS);	//Fin du programme.
}