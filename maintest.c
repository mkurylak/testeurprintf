/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:47:22 by makuryla          #+#    #+#             */
/*   Updated: 2024/11/07 19:47:27 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret_printf, ret_ft_printf;
	char	c = 'A';
	char	*str = "Bonjour, 42 !";
	void	*ptr = &c;
	int		d = -12345;
	int		i = -12345;
	unsigned int	u = 12345;
	unsigned int	x = 57005;
	unsigned int	X = 57005;

    // Test du caractère
    printf("Test de %%c:\n");
    ret_printf = printf("printf    : [%c]\n", c);
    ret_ft_printf = ft_printf("ft_printf : [%c]\n", c);
    printf("Valeurs de retour: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

    // Test de la chaîne de caractères
    printf("Test de %%s:\n");
    ret_printf = printf("printf    : [%s]\n", str);
    ret_ft_printf = ft_printf("ft_printf : [%s]\n", str);
    printf("Valeurs de retour: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

    // Test du pointeur
    printf("Test de %%p:\n");
    ret_printf = printf("printf    : [%p]\n", ptr);
    ret_ft_printf = ft_printf("ft_printf : [%p]\n", ptr);
    printf("Valeurs de retour: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

    // Test des entiers décimaux
    printf("Test de %%d\n");
    ret_printf = printf("printf    : [%d]\n", d);
    ret_ft_printf = ft_printf("ft_printf : [%d]\n", d);
    printf("Valeurs de retour: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

	printf("Test de %%i:\n");
    ret_printf = printf("printf    : [%i]\n", i);
    ret_ft_printf = ft_printf("ft_printf : [%i]\n", i);
    printf("Valeurs de retour: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

    // Test des entiers non signés
    printf("Test de %%u:\n");
    ret_printf = printf("printf    : [%u]\n", u);
    ret_ft_printf = ft_printf("ft_printf : [%u]\n", u);
    printf("Valeurs de retour: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

    // Test des hexadécimaux minuscules
    printf("Test de %%x:\n");
    ret_printf = printf("printf    : [%x]\n", x);
    ret_ft_printf = ft_printf("ft_printf : [%x]\n", x);
    printf("Valeurs de retour: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

    // Test des hexadécimaux majuscules
    printf("Test de %%X:\n");
    ret_printf = printf("printf    : [%X]\n", X);
    ret_ft_printf = ft_printf("ft_printf : [%X]\n", X);
    printf("Valeurs de retour: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

    // Test du pourcentage
    printf("Test de %%%%:\n");
    ret_printf = printf("printf    : [%%%%]\n");
    ret_ft_printf = ft_printf("ft_printf : [%%%%]\n");
    printf("Valeurs de retour: printf=%d, ft_printf=%d\n\n", ret_printf, ret_ft_printf);

    return 0;
}
