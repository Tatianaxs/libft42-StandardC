/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:59:37 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/26 16:19:19 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	n;

	n = 0;
	if (str == NULL)
	{
		return (0);
	}
	while (str[n])
		n++;
	return (n);
}

/*int main(void) {
    const char *cadena = "Hola mundo";
    int longitud = ft_strlen(cadena);

    printf("La longitud de la cadena \"%s\" es: %d\n", cadena, longitud);

    return 0;
}*/
