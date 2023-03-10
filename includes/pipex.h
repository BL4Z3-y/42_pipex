/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:10:02 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/25 17:10:42 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <limits.h>
# include <stdarg.h>

//FT_PRINTF
int		ft_printf(const char *str, ...);
void	ft_print_char(char c, int *len);
void	ft_print_str(char *str, int *len);
void	ft_print_nbr(int i, int *len);
void	ft_print_adr(unsigned long l, int *len);
/*--------------------------------*/
//LIBFT
char	**ft_split(char const *s, char c);
char	*ft_join(char *s1, char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*--------------------------------*/
//HELPERS
void	check_args(char **av, char **env);
void	ft_error(int err);
/*--------------------------------*/

#endif