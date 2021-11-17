/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:49:01 by eschmid           #+#    #+#             */
/*   Updated: 2021/10/29 14:42:32 by eschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
//	char	*zebi;

//	zebi = (char *)s;
	i = ft_strlen(s);
	while (i > 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	return (NULL);
}
/*
int main ()
{
	const char *s = "ehllo";
	int c ='h';
 
      printf("%s\n", ft_strrchr(s,c));
      printf("%s\n", strrchr(s,c));
}*/
