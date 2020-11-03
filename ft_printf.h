/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 16:36:01 by drina             #+#    #+#             */
/*   Updated: 2020/06/30 22:15:38 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

struct				s_flags
{
	int				minus;
	int				dot;
	int				zero;
	int				width;
	int				precision;
	int				len_list;
	int				num;
	int				sign_w;
};

int					spec(int c);
int					ft_print_c(char c, struct s_flags flag);
int					check_sym(char **list);
int					ft_str(char *list, struct s_flags flag);
int					ft_toupper(int c);
int					ft_strlen(const char *s);
int					wr_char_len(int c, int len);
int					ft_atoi(const char *str);
int					ft_isdigit(int c);
int					ft_hex(va_list ptr, int base,
							int flag, struct s_flags flags);
int					print_d_i(char *list, struct s_flags flag);
int					ft_itoa(int c, struct s_flags flag);
int					ft_printf(const char *line, ...);
int					ft_pointer(unsigned long int number, struct s_flags flag);
char				*ft_utoa(unsigned int number, int base, int flag);
int					num_base(unsigned long int c, int base);
int					print_str(char *s, int len);
int					print_pointer(char *list, struct s_flags flags);
int					print_char(char c);
int					ft_width(const char **line, va_list ptr,
								struct s_flags *flag);
int					ft_precision(const char **line, va_list ptr,
									struct s_flags *flag);
struct s_flags		ft_flags(void);
struct s_flags		parse_flags(const char **line, va_list ptr);

#endif
