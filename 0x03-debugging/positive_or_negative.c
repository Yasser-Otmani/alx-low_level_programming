#include "main.h"

/**
 * positive_or_negative - Détermine si un nombre est positif, négatif ou nul.
 * @i: Nombre à évaluer
 * Return: Aucun
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d est %s\n", i, "négatif");
	}
	else if (i > 0)
	{
		printf("%d est %s\n", i, "positif");
	}
	else
	{
		printf("%d est %s\n", i, "zéro");
	}
}

/**
 * main - Fonction principale
 * Return: 0
 */
int main(void)
{
	int num = 0;

	positive_or_negative(num);

	return (0);
}
