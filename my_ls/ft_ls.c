/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ls.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/09 17:38:36 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:35:57 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_ls.h"

int		ft_verif_arg(char *argv_one)
{
	int i;
	t_param p;
	i = 1;
	while (argv_one[i])
	{
		if (argv_one[i] == 'l')
		{
			p.list_para[i] = 'l';
			i++;
			//ft_dash_l();
		}
		else if (argv_one[i] == 'R')
		{
			p.list_para[i] = 'R';
			i++;
			//ft_dash_R();
		}
		else if (argv_one[i] == 'a')
		{
			p.list_para[i] = 'a';
			i++;
			//ft_dash_a();
		}
		else if (argv_one[i] == 'r')
		{
			p.list_para[i] = 'r';
			i++;
			//ft_dash_r();
		}
		else if (argv_one[i] == 't')
		{
			p.list_para[i] = 't';
			i++;
			//ft_dash_t();
		}
		else
		{
			ft_putstr("ls: illegal option -- ");
			ft_putchar(argv_one[i]);
			ft_putchar('\n');
			ft_putstr("usage: ls [-Ralrt] [file ...]\n");
			return (0);
		}
	}
	p.list_para[i] = '\0';
	return (1);
}

void ft_print_struct(void)
{
	int i;
	t_param p;
	i = 0;
	while (p.list_para[i] != '\0')
	{
		printf("%c", p.list_para[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	char *params;

	i = 0;
	(void)argc;
	printf("%zu", ft_strlen(argv[1]));
	params = ft_strnew(ft_strlen(argv[1]));
/*	while (argv[1][i])
	{

	}*/
	ft_verif_arg(argv[1]);
	ft_print_struct();
	return (0);
}
