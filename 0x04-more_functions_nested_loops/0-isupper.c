#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: Variable texte
 * Return: 1 si le caractère est une majuscule, 0 sinon.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
