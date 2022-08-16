/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 02:16:18 by amahi             #+#    #+#             */
/*   Updated: 2022/07/16 03:16:14 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**init_paths(char **env)
{
	int		i;
	char	*tmp;
	char	**paths;

	i = -1;
	while (env[++i])
	{
		if (ft_strnstr(env[i], "PATH", 4))
			break ;
	}
	tmp = env[i];
	i = -1;
	while (tmp[++i])
		tmp[i] = tmp[i + 5];
	paths = ft_split(tmp, ':');
	return (paths);
}

char	*get_cmd(char **env, char *cmd)
{
	int		i;
	char	*tmp;
	char	**paths;

	i = -1;
	paths = init_paths(env);
	while (paths[++i])
	{
		tmp = ft_strjoin(paths[i], "/");
		tmp = ft_strjoin(tmp, cmd);
		if (access(tmp, 0) == 0)
			return (tmp);
	}
	return (NULL);
}