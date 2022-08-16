/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 02:16:15 by amahi             #+#    #+#             */
/*   Updated: 2022/07/16 03:09:56 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

// check_command.c
char	*get_cmd(char **env, char *cmd);
char	**init_paths(char **env);

// src.c
char	*ft_strnstr(const char *strB, const char *strA, size_t len); //  В strB ищет strA
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	**ft_split(char const *s, char c);


#endif