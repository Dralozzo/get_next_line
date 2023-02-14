/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicoter <lnicoter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:14:03 by lnicoter          #+#    #+#             */
/*   Updated: 2023/02/12 16:23:08 by lnicoter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H


# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42;
#endif

char	*get_next_line(int fd);
char	*ft_strdup(const char *str);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_memcpy(void *dst, const void *src, size_t n);
#endif

