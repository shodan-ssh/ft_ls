/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isxdigit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 13:28:00 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 14:21:13 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_hexa_nb(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))
		return (1);
	return (0);
}
