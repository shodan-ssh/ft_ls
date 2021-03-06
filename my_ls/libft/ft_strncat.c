/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:00:17 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 11:38:57 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str;
	int		i;

	str = s1;
	i = 0;
	while (*s1)
		s1++;
	while (*s2 && n > 0)
	{
		s1[i++] = *s2++;
		n--;
	}
	s1[i] = '\0';
	return (str);
}
