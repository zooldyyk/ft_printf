/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:32:32 by eschmid           #+#    #+#             */
/*   Updated: 2021/10/29 14:35:07 by eschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i]== (char)c)
		return (&((char *)s)[i]);
	return (NULL);
}
/*
int main ()
{
	const char *s = "hello"; 
	int c ='h';

	printf("%s\n", ft_strchr(s,c));
	printf("%s\n", strchr(s,c));
}*/
