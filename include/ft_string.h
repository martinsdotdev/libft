/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:20:48 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/18 00:41:26 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>
# include <unistd.h>

typedef char	*t_string;

size_t			ft_strlen(const char *s);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
size_t			ft_strcspn(const char *s, const char *reject);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
t_string		ft_join(char **arr, char *s);
void			ft_freesplit(char **s);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
t_string		ft_stnnew(const char *s);
t_string		ft_stnnew_size(const char *s, size_t size);
t_string		ft_stnnew_empty(void);
void			ft_stnfree(t_string s);
size_t			ft_stnlen(const t_string s);
size_t			ft_stncap(const t_string s);
t_string		ft_stndup(const t_string s);
t_string		ft_stncpy(t_string dst, const char *src);
t_string		ft_stncpy_size(t_string dst, const char *src, size_t size);
t_string		ft_stncat(t_string dst, const char *src);
t_string		ft_stncat_size(t_string dst, const char *src, size_t size);
int				ft_stncmp(const t_string s1, const t_string s2);
t_string		ft_stntrim(t_string s1, const char *set);
t_string		ft_stnrange(t_string s, ssize_t start, ssize_t end);
t_string		ft_stnlpad(t_string s, size_t size, char c);
t_string		ft_stnrpad(t_string s, size_t size, char c);
t_string		ft_stntoupper(t_string s);
t_string		ft_stntolower(t_string s);
t_string		ft_stnexpand(t_string s, size_t size);
t_string		ft_stncontract(t_string s);

#endif
